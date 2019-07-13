#pragma once
#ifndef LEARNINGTABLE
#define LEARNINGTABLE

#include "ui_LearningTable.h"
#include <QtWidgets/QMainWindow>

class LearningTable : public QWidget
{
	Q_OBJECT
public:
	LearningTable(QWidget *parent = Q_NULLPTR);
	~LearningTable();

private slots:

private:
	Ui::LearningTable ui;

};





#endif // !LEARNINGTABLE
