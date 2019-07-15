#pragma once
#ifndef LEARNINGTABLE_H
#define LEARNINGTABLE_H

#include "ui_LearningTable.h"
#include <QtWidgets/QMainWindow>
#include "main.h"
#include "database.h"

class LearningTable : public QWidget
{
	Q_OBJECT
public:
	LearningTable(QWidget *parent = Q_NULLPTR);
	~LearningTable();
	Mat cap;
	void refresh(Mat image);

private slots:

private:
	Ui::LearningTable ui;
	DataBase_s db;
};

#endif // !LEARNINGTABLE
