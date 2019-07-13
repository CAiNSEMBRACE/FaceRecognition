/********************************************************************************
** Form generated from reading UI file 'LearningTable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNINGTABLE_H
#define UI_LEARNINGTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearningTable
{
public:

    void setupUi(QWidget *LearningTable)
    {
        if (LearningTable->objectName().isEmpty())
            LearningTable->setObjectName(QStringLiteral("LearningTable"));
        LearningTable->resize(400, 300);

        retranslateUi(LearningTable);

        QMetaObject::connectSlotsByName(LearningTable);
    } // setupUi

    void retranslateUi(QWidget *LearningTable)
    {
        LearningTable->setWindowTitle(QApplication::translate("LearningTable", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LearningTable: public Ui_LearningTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNINGTABLE_H
