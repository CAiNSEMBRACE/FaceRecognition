#pragma once
#ifndef QTFUIFACERECOGINTION_H
#define QTFUIFACERECOGINTION_H

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiFaceRecognition.h"
#include "main.h"
#include "InfoInput.h"
#include "CheckOnWork.h"
#include "LearningTable.h"
#include "Ima_Col.h"
#include "Train_Thread.h"

class QtGuiFaceRecognition : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiFaceRecognition(QWidget *parent = Q_NULLPTR);
	~QtGuiFaceRecognition();
	void refresh();
private slots:
	void train();
	void on_pushButton_1_clicked();//��Ϣ¼�� �ۺ���
	void on_pushButton_2_clicked();//ѧϰ�� �ۺ���
	void on_pushButton_3_clicked();//����չʾ �ۺ���
private:
	Ui::QtGuiFaceRecognitionClass ui;
	int flag;
	Mat cap;
	InfoInput *w1;
	CheckOnWork *w2;
	LearningTable *w3;
	QTimer* video_timer;
	VideoCapture* capture;
	Train_Thread* train_thread;
};

#endif // !QTFUIFACERECOGINTION_H
