#include "LearningTable.h"

LearningTable::LearningTable(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//���ݿ��ʼ��
	db.createConnection();

	ui.labelList->setText(db.show());
}

LearningTable::~LearningTable()
{
	
}

void LearningTable::refresh(Mat image)
{
	cap = image;
}
