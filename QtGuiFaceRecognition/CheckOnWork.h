#pragma once
#ifndef CHECKONWORK
#define CHECKONWORK

#include <QtWidgets/QMainWindow>
#include "ui_CheckOnWork.h"
#include "main.h"
#include <QString>
#include <QTimer>
#include <QtDebug>
#include <qfile.h>
#include "Ima_Col.h"
#include <QGraphicsScene>

class CheckOnWork : public QWidget
{
	Q_OBJECT

public:
	CheckOnWork(QWidget* parent = Q_NULLPTR);
	~CheckOnWork();

private slots:

private:
	Ui::CheckOnWork ui;

};





#endif // !CHECKONWORK
