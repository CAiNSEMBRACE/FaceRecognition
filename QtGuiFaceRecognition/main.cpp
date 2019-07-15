#include "QtGuiFaceRecognition.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiFaceRecognition w;
	w.show();

	return a.exec();
}
