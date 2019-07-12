#include "QtGuiFaceRecognition.h"

QtGuiFaceRecognition::QtGuiFaceRecognition(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

QtGuiFaceRecognition::~QtGuiFaceRecognition()
{
}

void QtGuiFaceRecognition::on_pushButton_1_clicked()
{
	w1 = new InfoInput();
	w1->show();
}

void QtGuiFaceRecognition::on_pushButton_2_clicked()
{
	w2 = new CheckOnWork();
	w2->show();
}

void QtGuiFaceRecognition::on_pushButton_3_clicked()
{
	w3 = new LearningTable();
	w3->show();
}
