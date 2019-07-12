#pragma once

#ifndef INFO
#define INFO

#include <QtWidgets/QMainWindow>
#include "ui_InfoInput.h"
#include "main.h"
#include <QString>
#include <qfile.h>

class InfoInput : public QWidget
{
	Q_OBJECT

public:
	InfoInput(QWidget* parent = Q_NULLPTR);
	~InfoInput();
private slots:
	void on_Edit_name_textChanged(const QString& tmp);
	void on_Edit_id_textChanged(const QString& tmp);
	void on_Edit_class_textChanged(const QString& tmp);
	void on_Button_input_clicked();
private:
	Ui::InfoInput ui;
	//Â¼ÈëÊý¾Ý
	QString _name;
	QString _class;
	QString _id;

};

#endif // INFO