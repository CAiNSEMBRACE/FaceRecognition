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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoInput
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *InfoInput)
    {
        if (InfoInput->objectName().isEmpty())
            InfoInput->setObjectName(QStringLiteral("InfoInput"));
        InfoInput->resize(617, 502);
        textEdit = new QTextEdit(InfoInput);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 60, 251, 31));
        label = new QLabel(InfoInput);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 54, 12));
        label_2 = new QLabel(InfoInput);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 110, 54, 12));
        textEdit_2 = new QTextEdit(InfoInput);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(50, 140, 251, 31));
        label_3 = new QLabel(InfoInput);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 190, 54, 12));
        textEdit_3 = new QTextEdit(InfoInput);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(50, 220, 251, 31));
        pushButton = new QPushButton(InfoInput);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 450, 75, 23));

        retranslateUi(InfoInput);

        QMetaObject::connectSlotsByName(InfoInput);
    } // setupUi

    void retranslateUi(QWidget *InfoInput)
    {
        InfoInput->setWindowTitle(QApplication::translate("InfoInput", "Form", nullptr));
        label->setText(QApplication::translate("InfoInput", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("InfoInput", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("InfoInput", "\347\217\255\347\272\247", nullptr));
        pushButton->setText(QApplication::translate("InfoInput", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoInput: public Ui_InfoInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOINPUT_H
