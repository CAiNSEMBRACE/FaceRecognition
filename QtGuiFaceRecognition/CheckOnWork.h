#pragma once
#ifndef CHECKONWORK_H
#define CHECKONWORK_H

#include <QtWidgets/QMainWindow>
#include "ui_CheckOnWork.h"
#include "main.h"
#include "Fac_Rec.h"
#include "database.h"

class CheckOnWork : public QWidget
{
	Q_OBJECT
	DataBase_s db;
public:
	CheckOnWork(QWidget* parent = Q_NULLPTR);
	~CheckOnWork();

private slots:
	void on_Button_work_clicked();//开始识别按钮槽函数
private:
	Ui::CheckOnWork ui;

	Fac_Rec *fac_rec;
public:
	Mat cap;
	void refresh(Mat image, int &flag);
};

#endif // !CHECKONWORK
