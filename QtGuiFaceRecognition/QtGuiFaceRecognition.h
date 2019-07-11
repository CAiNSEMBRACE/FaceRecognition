#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiFaceRecognition.h"

class QtGuiFaceRecognition : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiFaceRecognition(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiFaceRecognitionClass ui;
};
