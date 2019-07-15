#include "QtGuiFaceRecognition.h"

QtGuiFaceRecognition::QtGuiFaceRecognition(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	w1 = NULL, w2 = NULL, w3 = NULL;
	capture = new VideoCapture;
	capture->open(0);
	train_thread = new Train_Thread;
	video_timer = new QTimer;
	flag = 0;
	video_timer->start(35);
	connect(video_timer, &QTimer::timeout, this, &QtGuiFaceRecognition::refresh);

	//train_thread->start();
}

QtGuiFaceRecognition::~QtGuiFaceRecognition()
{
	delete train_thread;
	delete video_timer;
	delete capture;
}

void QtGuiFaceRecognition::refresh()
{
	capture->read(cap);

	if (flag == 1)
	{
		w1->refresh(cap, flag);
	}
	else if (flag == 2)
	{
		w2->refresh(cap, flag);
	}
	else if (flag == 3)
	{
		train();
		flag = 0;
	}
}

void QtGuiFaceRecognition::train() {
	//video_timer->stop();
	//ui.pushButton_1->setDisabled(true);
	//ui.pushButton_2->setDisabled(true);
	
	train_thread->start();
	
	//ui.pushButton_1->setDisabled(false);
	//ui.pushButton_2->setDisabled(false);
	//video_timer->start(35);
}

void QtGuiFaceRecognition::on_pushButton_1_clicked()
{
	w1 = new InfoInput;
	flag = 1;
	w1->setAttribute(Qt::WA_DeleteOnClose, true);
	w1->show();
}

void QtGuiFaceRecognition::on_pushButton_2_clicked()
{
	w2 = new CheckOnWork;
	flag = 2;
	w2->setAttribute(Qt::WA_DeleteOnClose, true);
	w2->show();
}

void QtGuiFaceRecognition::on_pushButton_3_clicked()
{
	w3 = new LearningTable;
	w3->setAttribute(Qt::WA_DeleteOnClose, true);
	w3->show();
}
