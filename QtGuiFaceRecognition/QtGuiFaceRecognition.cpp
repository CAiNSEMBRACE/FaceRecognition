#include "QtGuiFaceRecognition.h"
#include "InfoInput.h"

QtGuiFaceRecognition::QtGuiFaceRecognition(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtGuiFaceRecognition::on_pushButton_1_clicked()
{
	//QWidget *w1 = new QWidget();
	//w1->show();
	InfoInput *w1 = new InfoInput();
	w1->show();
}
