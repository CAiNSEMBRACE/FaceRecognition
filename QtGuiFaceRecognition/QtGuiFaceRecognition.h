#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_QtGuiFaceRecognition.h"
#include "InfoInput.h"
#include "CheckOnWork.h"
#include "LearningTable.h"

class QtGuiFaceRecognition : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiFaceRecognition(QWidget *parent = Q_NULLPTR);
	~QtGuiFaceRecognition();
private slots:
	void on_pushButton_1_clicked();//信息录入 槽函数
	void on_pushButton_2_clicked();//学习打卡 槽函数
	void on_pushButton_3_clicked();//数据展示 槽函数
private:
	Ui::QtGuiFaceRecognitionClass ui;
	InfoInput *w1;
	CheckOnWork *w2;
	LearningTable *w3;
};
