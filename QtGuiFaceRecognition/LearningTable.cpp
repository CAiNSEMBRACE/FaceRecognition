#include "LearningTable.h"

LearningTable::LearningTable(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//数据库初始化
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
