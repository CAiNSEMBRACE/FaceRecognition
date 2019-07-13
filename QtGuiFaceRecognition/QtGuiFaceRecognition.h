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
	void on_pushButton_1_clicked();//��Ϣ¼�� �ۺ���
	void on_pushButton_2_clicked();//ѧϰ�� �ۺ���
	void on_pushButton_3_clicked();//����չʾ �ۺ���
private:
	Ui::QtGuiFaceRecognitionClass ui;
	InfoInput *w1;
	CheckOnWork *w2;
	LearningTable *w3;
};
