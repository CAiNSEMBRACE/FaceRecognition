#pragma once

#ifndef INFO
#define INFO

#include <QtWidgets/QMainWindow>
#include "ui_InfoInput.h"
#include "main.h"
#include <QString>
#include <QTimer>
#include <QtDebug>
#include <qfile.h>
#include "Ima_Col.h"
#include <QGraphicsScene>
#include <opencv2/highgui/highgui.hpp>

class InfoInput : public QWidget
{
	Q_OBJECT

public:
	InfoInput(QWidget* parent = Q_NULLPTR);
	~InfoInput();
	QImage MatToQImage(const cv::Mat& mat);
protected:
	/*void timerEvent(QTimerEvent* event);*/
private slots:
	void on_Edit_name_textChanged(const QString& tmp);
	void on_Edit_id_textChanged(const QString& tmp);
	void on_Edit_class_textChanged(const QString& tmp);
	void on_Button_cam_clicked();
	void on_Button_input_clicked();
	void readFarme();
private:
	Ui::InfoInput ui;
	//录入数据
	QString _name;
	QString _class;
	QString _id;

	VideoCapture *mCapture;
	Mat img;
	QImage* image;

	QTimer* timer;

	bool flag = false;

	//QTimer 计时用；

	//IplImage* pFrame;
	////申请IplImage类型指针，就是申请内存空间来存放每一帧图像

	//CvCapture* cam;
	//// 视频获取结构， 用来作为视频获取函数的一个参数
};

#endif // INFO