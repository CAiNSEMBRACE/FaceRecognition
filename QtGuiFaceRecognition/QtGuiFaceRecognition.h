#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiFaceRecognition.h"

class QtGuiFaceRecognition : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiFaceRecognition(QWidget *parent = Q_NULLPTR);
private slots:
	void on_pushButton_1_clicked();//��Ϣ¼��ۺ���
private:
	Ui::QtGuiFaceRecognitionClass ui;
};
