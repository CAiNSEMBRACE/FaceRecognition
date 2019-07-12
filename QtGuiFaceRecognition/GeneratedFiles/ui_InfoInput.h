/********************************************************************************
** Form generated from reading UI file 'InfoInput.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
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

    void setupUi(QWidget *InfoInput)
    {
        if (InfoInput->objectName().isEmpty())
            InfoInput->setObjectName(QStringLiteral("InfoInput"));
        InfoInput->resize(617, 502);
        label = new QLabel(InfoInput);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 54, 12));
        label_2 = new QLabel(InfoInput);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 54, 12));
        label_3 = new QLabel(InfoInput);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 190, 54, 12));
        Button_input = new QPushButton(InfoInput);
        Button_input->setObjectName(QStringLiteral("Button_input"));
        Button_input->setGeometry(QRect(510, 450, 75, 23));
        Edit_name = new QLineEdit(InfoInput);
        Edit_name->setObjectName(QStringLiteral("Edit_name"));
        Edit_name->setGeometry(QRect(50, 60, 271, 31));
        Edit_id = new QLineEdit(InfoInput);
        Edit_id->setObjectName(QStringLiteral("Edit_id"));
        Edit_id->setGeometry(QRect(50, 140, 271, 31));
        Edit_class = new QLineEdit(InfoInput);
        Edit_class->setObjectName(QStringLiteral("Edit_class"));
        Edit_class->setGeometry(QRect(50, 210, 271, 31));

        retranslateUi(InfoInput);
        QObject::connect(Button_input, SIGNAL(clicked()), InfoInput, SLOT(close()));

        QMetaObject::connectSlotsByName(InfoInput);
    } // setupUi

    void retranslateUi(QWidget *InfoInput)
    {
        InfoInput->setWindowTitle(QApplication::translate("InfoInput", "Form", nullptr));
        label->setText(QApplication::translate("InfoInput", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("InfoInput", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("InfoInput", "\347\217\255\347\272\247", nullptr));
        Button_input->setText(QApplication::translate("InfoInput", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoInput: public Ui_InfoInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOINPUT_H
