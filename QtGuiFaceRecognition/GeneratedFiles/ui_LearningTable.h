/********************************************************************************
** Form generated from reading UI file 'LearningTable.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNINGTABLE_H
#define UI_LEARNINGTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearningTable
{
public:
    QGridLayout *gridLayout;
    QLabel *labelList;

    void setupUi(QWidget *LearningTable)
    {
        if (LearningTable->objectName().isEmpty())
            LearningTable->setObjectName(QString::fromUtf8("LearningTable"));
        LearningTable->resize(810, 520);
        gridLayout = new QGridLayout(LearningTable);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelList = new QLabel(LearningTable);
        labelList->setObjectName(QString::fromUtf8("labelList"));
        labelList->setAlignment(Qt::AlignCenter);
        labelList->setWordWrap(true);

        gridLayout->addWidget(labelList, 0, 0, 1, 1);


        retranslateUi(LearningTable);

        QMetaObject::connectSlotsByName(LearningTable);
    } // setupUi

    void retranslateUi(QWidget *LearningTable)
    {
        LearningTable->setWindowTitle(QCoreApplication::translate("LearningTable", "Form", nullptr));
        labelList->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LearningTable: public Ui_LearningTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNINGTABLE_H
