/********************************************************************************
** Form generated from reading UI file 'QtGuiFaceRecognition.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIFACERECOGNITION_H
#define UI_QTGUIFACERECOGNITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiFaceRecognitionClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiFaceRecognitionClass)
    {
        if (QtGuiFaceRecognitionClass->objectName().isEmpty())
            QtGuiFaceRecognitionClass->setObjectName(QStringLiteral("QtGuiFaceRecognitionClass"));
        QtGuiFaceRecognitionClass->resize(719, 572);
        centralWidget = new QWidget(QtGuiFaceRecognitionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(170, 320, 111, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 320, 111, 41));
        QtGuiFaceRecognitionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiFaceRecognitionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 719, 23));
        QtGuiFaceRecognitionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiFaceRecognitionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiFaceRecognitionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiFaceRecognitionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiFaceRecognitionClass->setStatusBar(statusBar);

        retranslateUi(QtGuiFaceRecognitionClass);

        QMetaObject::connectSlotsByName(QtGuiFaceRecognitionClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiFaceRecognitionClass)
    {
        QtGuiFaceRecognitionClass->setWindowTitle(QApplication::translate("QtGuiFaceRecognitionClass", "QtGuiFaceRecognition", nullptr));
        pushButton_1->setText(QApplication::translate("QtGuiFaceRecognitionClass", "\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        pushButton_2->setText(QApplication::translate("QtGuiFaceRecognitionClass", "\346\213\215\346\221\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiFaceRecognitionClass: public Ui_QtGuiFaceRecognitionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIFACERECOGNITION_H
