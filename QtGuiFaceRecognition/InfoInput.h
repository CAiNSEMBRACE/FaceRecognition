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

#include "database.h"

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
	//Â¼ÈëÊý¾Ý
	QString _name;
	QString _class;
	QString _id;

	VideoCapture *mCapture;
	Mat img;
	QImage* image;

	QTimer* timer;
	
	DataBase_s db;

};

#endif // INFO