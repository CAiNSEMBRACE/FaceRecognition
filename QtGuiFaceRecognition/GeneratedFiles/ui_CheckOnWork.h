/********************************************************************************
** Form generated from reading UI file 'CheckOnWork.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKONWORK_H
#define UI_CHECKONWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckOnWork
{
public:

    void setupUi(QWidget *CheckOnWork)
    {
        if (CheckOnWork->objectName().isEmpty())
            CheckOnWork->setObjectName(QStringLiteral("CheckOnWork"));
        CheckOnWork->resize(400, 300);

        retranslateUi(CheckOnWork);

        QMetaObject::connectSlotsByName(CheckOnWork);
    } // setupUi

    void retranslateUi(QWidget *CheckOnWork)
    {
        CheckOnWork->setWindowTitle(QApplication::translate("CheckOnWork", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckOnWork: public Ui_CheckOnWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKONWORK_H
