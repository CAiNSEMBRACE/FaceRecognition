/********************************************************************************
** Form generated from reading UI file 'CheckOnWork.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKONWORK_H
#define UI_CHECKONWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckOnWork
{
public:
    QLabel *label_cam;
    QLabel *label_name;
    QLabel *label_id;
    QLabel *label_class;
    QPushButton *Button_work;

    void setupUi(QWidget *CheckOnWork)
    {
        if (CheckOnWork->objectName().isEmpty())
            CheckOnWork->setObjectName(QString::fromUtf8("CheckOnWork"));
        CheckOnWork->resize(874, 460);
        label_cam = new QLabel(CheckOnWork);
        label_cam->setObjectName(QString::fromUtf8("label_cam"));
        label_cam->setGeometry(QRect(0, 0, 711, 461));
        label_name = new QLabel(CheckOnWork);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(740, 40, 121, 21));
        label_id = new QLabel(CheckOnWork);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setGeometry(QRect(740, 120, 121, 16));
        label_class = new QLabel(CheckOnWork);
        label_class->setObjectName(QString::fromUtf8("label_class"));
        label_class->setGeometry(QRect(740, 190, 121, 16));
        Button_work = new QPushButton(CheckOnWork);
        Button_work->setObjectName(QString::fromUtf8("Button_work"));
        Button_work->setGeometry(QRect(730, 380, 93, 28));

        retranslateUi(CheckOnWork);

        QMetaObject::connectSlotsByName(CheckOnWork);
    } // setupUi

    void retranslateUi(QWidget *CheckOnWork)
    {
        CheckOnWork->setWindowTitle(QCoreApplication::translate("CheckOnWork", "Form", nullptr));
        label_cam->setText(QString());
        label_name->setText(QCoreApplication::translate("CheckOnWork", "NAME", nullptr));
        label_id->setText(QCoreApplication::translate("CheckOnWork", "ID", nullptr));
        label_class->setText(QCoreApplication::translate("CheckOnWork", "CLASS", nullptr));
        Button_work->setText(QCoreApplication::translate("CheckOnWork", "\345\274\200\345\247\213\350\257\206\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckOnWork: public Ui_CheckOnWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKONWORK_H
