#pragma once
#ifndef INFO_COL_H
#define INFO_COL_H
#include <QtWidgets/QMainWindow>
#include "ui_InfoInput.h"
#include "main.h"
#include "database.h"
#include "Ima_Col.h"
#include "Mol_Tra.h"

class InfoInput : public QWidget
{
	Q_OBJECT
public:
	InfoInput(QWidget* parent = Q_NULLPTR);
	~InfoInput();
protected:
	/*void timerEvent(QTimerEvent* event);*/
private slots:
	void on_Edit_name_textChanged(const QString& tmp);
	void on_Edit_id_textChanged(const QString& tmp);
	void on_Edit_class_textChanged(const QString& tmp);
	//void on_Button_cam_clicked();
	void on_Button_input_clicked();
	void readFarme();
private:
	Ui::InfoInput ui;
	bool flag;
	//Â¼ÈëÊý¾Ý
	QString _name;
	QString _class;
	QString _id;

	QImage* image;

	DataBase_s db;

	Ima_Col *ima_col;
	Mol_Tra *mor_tra;
	int sav_num, delay;
	int* train_flag;
public:
	Mat img;
	bool video_flag;
	void refresh(Mat image, int &win_flag);
};

#endif // INFO