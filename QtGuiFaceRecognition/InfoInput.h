#pragma once

#ifndef INFO
#define INFO

#include <QtWidgets/QMainWindow>
#include "ui_InfoInput.h"

class InfoInput : public QWidget
{
	Q_OBJECT

public:
	InfoInput(QWidget* parent = Q_NULLPTR);
private slots:
	
private:
	Ui::InfoInput ui;
};

#endif // INFO