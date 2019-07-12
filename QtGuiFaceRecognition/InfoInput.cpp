#include "InfoInput.h"

InfoInput::InfoInput(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

InfoInput::~InfoInput()
{

}

void InfoInput::on_Edit_name_textChanged(const QString& tmp)
{
	_name = tmp;
}

void InfoInput::on_Edit_id_textChanged(const QString& tmp)
{
	_id = tmp;
}

void InfoInput::on_Edit_class_textChanged(const QString& tmp)
{
	_class = tmp;
}

void InfoInput::on_Button_input_clicked()
{

	QFile file("TestList.txt");
	//不存在创建，存在则打开
	file.open(QIODevice::ReadWrite | QIODevice::Text);
	//写入内容，注意需要转码，否则会报错
	QString tmp = _id + " " + _name + " " + _class;
	QByteArray str = tmp.toUtf8();
	//写入QByteArray格式字符串
	file.write(str);

	/*QDataStream stream(&file);
	stream << _id << " " << _name << " " << _class;*/
	file.close();

}
