#include "InfoInput.h"

InfoInput::InfoInput(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//数据库初始化
	db.createConnection();
	db.createTable();

	timer = new QTimer(this);
	//初始化timer

	//初始化各数据
	image = new QImage();

	connect(timer, SIGNAL(timeout()), this, SLOT(readFarme()));

	// 时间到，读取当前摄像头信息,这个必须加，因为timer需要配合timeout()信号用
	//没有的话会出现错误；
	//另外注意自己有没有野指针，有的话常常会
	//出现Program Files (x86)\SogouInput\7.2.0.2124\程序异常终止,这样的错误
}

InfoInput::~InfoInput()
{

}

QImage InfoInput::MatToQImage(const cv::Mat& mat)
{
	// 8-bits unsigned, NO. OF CHANNELS = 1  
	if (mat.type() == CV_8UC1)
	{
		QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
		// Set the color table (used to translate color indexes to qRgb values)  
		image.setColorCount(256);
		for (int i = 0; i < 256; i++)
		{
			image.setColor(i, qRgb(i, i, i));
		}
		// Copy input Mat  
		uchar* pSrc = mat.data;
		for (int row = 0; row < mat.rows; row++)
		{
			uchar* pDest = image.scanLine(row);
			memcpy(pDest, pSrc, mat.cols);
			pSrc += mat.step;
		}
		return image;
	}
	// 8-bits unsigned, NO. OF CHANNELS = 3  
	else if (mat.type() == CV_8UC3)
	{
		// Copy input Mat  
		const uchar* pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
		return image.rgbSwapped();
	}
	else if (mat.type() == CV_8UC4)
	{
		qDebug() << "CV_8UC4";
		// Copy input Mat  
		const uchar* pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
		return image.copy();
	}
	else
	{
		qDebug() << "ERROR: Mat could not be converted to QImage.";
		return QImage();
	}
}

void InfoInput::on_Edit_name_textChanged(const QString& tmp)
{
	_name = tmp;
}

void InfoInput::on_Edit_id_textChanged(const QString& tmp)
{
	_id = tmp;
}

void InfoInput::on_Edit_class_textChanged(const QString& tmp)
{
	_class = tmp;
}

void InfoInput::on_Button_cam_clicked()
{
	//开启色相头
	mCapture = new VideoCapture(0);

	timer->start(30);

}

void InfoInput::readFarme()
{
	mCapture->read(img);
	QImage newImg = MatToQImage(img);
	int a = ui.labelCam->width();
	int b = ui.labelCam->height();
	newImg = newImg.scaled(a, b);
	ui.labelCam->setPixmap(QPixmap::fromImage(newImg));
	ui.labelCam->show();
}

void InfoInput::on_Button_input_clicked()
{
	db.insert(_id.toInt(), _name, _class.toInt(), 0);
}
