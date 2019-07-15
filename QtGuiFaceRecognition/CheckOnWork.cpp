#include "CheckOnWork.h"


CheckOnWork::CheckOnWork(QWidget* parent /* = Q_NULLPTR */)
	: QWidget(parent)
{
	ui.setupUi(this);
	fac_rec = new Fac_Rec;
	db.createConnection();
}

CheckOnWork::~CheckOnWork()
{
}

void CheckOnWork::refresh(Mat image, int& flag)
{
	cap = image;
	
	QImage newImg = MatToQImage(cap);
	int a = ui.label_cam->width();
	int b = ui.label_cam->height();
	newImg = newImg.scaled(a, b);
	ui.label_cam->setPixmap(QPixmap::fromImage(newImg));
	ui.label_cam->show();

	flag = 0;
}

void CheckOnWork::on_Button_work_clicked()
{
	int result = fac_rec->fac_rec(cap);
	ui.label_id->setText(QString::number(result));
	string str = db.select(result);
	string buff;
	stringstream  ss(str);
	QString tokens[3];
	for (int i = 0; i < 3; i ++ )  {
			ss >> buff;
			tokens[i] = QString::fromStdString(buff);
	}
	ui.label_class->setText(tokens[2]);
	if (tokens[0]== "NULL")
		ui.label_id->setText("NULL");
	else
		ui.label_id->setText(QString::number(tokens[0].toInt() - tokens[2].toInt() * 100));
	ui.label_name->setText(tokens[1]);
	if (tokens[0] == "NULL")
	{
		return;
	}
	if (db.select_time(result) == 0) {
		db.update(result, DataBase_s::GetTimeBySec());
	}
	else {
		int time = db.select_time(result/100)+DataBase_s::GetTimeBySec() - db.select_time(result);
		db.update(result, 0);
		db.update(result / 100, time);
	}
}