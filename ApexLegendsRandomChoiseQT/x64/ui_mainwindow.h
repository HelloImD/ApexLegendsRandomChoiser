/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(372, 233);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 190, 141, 23));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(201, 13, 71, 17));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(278, 13, 79, 17));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(278, 138, 64, 17));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(201, 63, 58, 17));
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(201, 38, 58, 17));
        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(278, 38, 56, 17));
        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(278, 63, 56, 17));
        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(201, 88, 46, 17));
        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(278, 88, 55, 17));
        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(201, 113, 58, 17));
        checkBox_11 = new QCheckBox(centralwidget);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(278, 113, 73, 17));
        checkBox_12 = new QCheckBox(centralwidget);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        checkBox_12->setGeometry(QRect(201, 138, 70, 17));
        checkBox_13 = new QCheckBox(centralwidget);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        checkBox_13->setGeometry(QRect(201, 163, 55, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 191));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Random Choose", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CHOOSE", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Bangalore", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Bloodhound", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Wattson", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Giraltar", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Caustic", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "Crypto", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "Lifeline", nullptr));
        checkBox_8->setText(QCoreApplication::translate("MainWindow", "Loba", nullptr));
        checkBox_9->setText(QCoreApplication::translate("MainWindow", "Mirage", nullptr));
        checkBox_10->setText(QCoreApplication::translate("MainWindow", "Octane", nullptr));
        checkBox_11->setText(QCoreApplication::translate("MainWindow", "Pathfinder", nullptr));
        checkBox_12->setText(QCoreApplication::translate("MainWindow", "Revenant", nullptr));
        checkBox_13->setText(QCoreApplication::translate("MainWindow", "Wraith", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
