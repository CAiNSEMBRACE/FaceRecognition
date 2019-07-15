/********************************************************************************
** Form generated from reading UI file 'InfoInput.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOINPUT_H
#define UI_INFOINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoInput
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Button_input;
    QLineEdit *Edit_name;
    QLineEdit *Edit_id;
    QLineEdit *Edit_class;
    QLabel *labelCam;
    QLabel *label_Info;

    void setupUi(QWidget *InfoInput)
    {
        if (InfoInput->objectName().isEmpty())
            InfoInput->setObjectName(QString::fromUtf8("InfoInput"));
        InfoInput->resize(880, 500);
        label = new QLabel(InfoInput);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(630, 20, 61, 21));
        label_2 = new QLabel(InfoInput);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 100, 71, 31));
        label_3 = new QLabel(InfoInput);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(630, 180, 61, 21));
        Button_input = new QPushButton(InfoInput);
        Button_input->setObjectName(QString::fromUtf8("Button_input"));
        Button_input->setGeometry(QRect(780, 430, 75, 23));
        Edit_name = new QLineEdit(InfoInput);
        Edit_name->setObjectName(QString::fromUtf8("Edit_name"));
        Edit_name->setGeometry(QRect(630, 50, 211, 31));
        Edit_id = new QLineEdit(InfoInput);
        Edit_id->setObjectName(QString::fromUtf8("Edit_id"));
        Edit_id->setGeometry(QRect(630, 130, 211, 31));
        Edit_class = new QLineEdit(InfoInput);
        Edit_class->setObjectName(QString::fromUtf8("Edit_class"));
        Edit_class->setGeometry(QRect(630, 210, 211, 31));
        labelCam = new QLabel(InfoInput);
        labelCam->setObjectName(QString::fromUtf8("labelCam"));
        labelCam->setGeometry(QRect(0, 0, 621, 451));
        label_Info = new QLabel(InfoInput);
        label_Info->setObjectName(QString::fromUtf8("label_Info"));
        label_Info->setGeometry(QRect(720, 390, 151, 31));

        retranslateUi(InfoInput);
        QObject::connect(Button_input, SIGNAL(clicked()), InfoInput, SLOT(close()));

        QMetaObject::connectSlotsByName(InfoInput);
    } // setupUi

    void retranslateUi(QWidget *InfoInput)
    {
        InfoInput->setWindowTitle(QCoreApplication::translate("InfoInput", "Form", nullptr));
        label->setText(QCoreApplication::translate("InfoInput", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("InfoInput", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("InfoInput", "\347\217\255\347\272\247", nullptr));
        Button_input->setText(QCoreApplication::translate("InfoInput", "\346\217\220\344\272\244", nullptr));
        labelCam->setText(QString());
        label_Info->setText(QCoreApplication::translate("InfoInput", "\350\211\262\347\233\270\345\244\264\346\255\243\345\234\250\351\207\207\351\233\206\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoInput: public Ui_InfoInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOINPUT_H
