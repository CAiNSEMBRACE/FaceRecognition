#include "InfoInput.h"

InfoInput::InfoInput(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//数据库初始化
	db.createConnection();
	db.createTable();

	//初始化timer

	//初始化各数据
	flag = false;

	image = new QImage();

	ui.Button_input->setDisabled(true);

	sav_num = 0;
	delay = 0;

	train_flag = NULL;

	//视频流flag
	video_flag = true;
}

InfoInput::~InfoInput()
{
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

void InfoInput::readFarme()
{
	if (delay >= 60 && sav_num < 10)
	{
		if (ima_col->sav_tra(img, sav_num + 1, db.GetNum() + 1) == 0) {
			sav_num++;
			delay = 0;
		}
	}
	if (sav_num == 10)
	{
		ui.Button_input->setDisabled(false);
		ui.label_Info->setText("Succeed!");
		video_flag = false;
		sav_num++;
	}
	QImage newImg = MatToQImage(img);
	int a = ui.labelCam->width();
	int b = ui.labelCam->height();
	newImg = newImg.scaled(a, b);
	ui.labelCam->setPixmap(QPixmap::fromImage(newImg));
	ui.labelCam->show();

	delay++;
}

void InfoInput::refresh(Mat image, int& win_flag)
{
	img = image;
	if (!flag)
	{
		train_flag = &win_flag;
		ima_col = new Ima_Col();
	}
	flag = true;
	readFarme();
	if (!video_flag)
	{
		win_flag = 0;
	}
}

void InfoInput::on_Button_input_clicked()
{
	ima_col->sav_csv(_id.toInt() + (_class.toInt() * 100), db.GetNum() + 1);
	db.insert((_id.toInt() + _class.toInt() * 100), _name, _class.toInt(), 0);
	*train_flag = 3;
	delete ima_col;
}
