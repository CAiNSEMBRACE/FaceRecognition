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
	//�����ڴ������������
	file.open(QIODevice::ReadWrite | QIODevice::Text);
	//д�����ݣ�ע����Ҫת�룬����ᱨ��
	QString tmp = _id + " " + _name + " " + _class;
	QByteArray str = tmp.toUtf8();
	//д��QByteArray��ʽ�ַ���
	file.write(str);

	/*QDataStream stream(&file);
	stream << _id << " " << _name << " " << _class;*/
	file.close();

}
