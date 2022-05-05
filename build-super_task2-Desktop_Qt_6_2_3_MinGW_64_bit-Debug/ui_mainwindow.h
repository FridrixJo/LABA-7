/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QComboBox *comboBox_all;
    QComboBox *comboBox_one;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *do_one;
    QPushButton *do_all;
    QSpinBox *spinBox;
    QTextEdit *info;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 480));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        comboBox_all = new QComboBox(centralwidget);
        comboBox_all->setObjectName(QString::fromUtf8("comboBox_all"));
        comboBox_all->setGeometry(QRect(50, 280, 121, 31));
        comboBox_one = new QComboBox(centralwidget);
        comboBox_one->setObjectName(QString::fromUtf8("comboBox_one"));
        comboBox_one->setGeometry(QRect(360, 280, 121, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 60, 451, 131));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 121, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";"));
        do_one = new QPushButton(centralwidget);
        do_one->setObjectName(QString::fromUtf8("do_one"));
        do_one->setGeometry(QRect(550, 280, 51, 31));
        do_one->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        do_all = new QPushButton(centralwidget);
        do_all->setObjectName(QString::fromUtf8("do_all"));
        do_all->setGeometry(QRect(190, 280, 51, 31));
        do_all->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(490, 280, 51, 31));
        spinBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";\n"
"color: rgb(0, 0, 255)"));
        info = new QTextEdit(centralwidget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(200, 210, 241, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "bitset<64>", nullptr));
        do_one->setText(QCoreApplication::translate("MainWindow", "do", nullptr));
        do_all->setText(QCoreApplication::translate("MainWindow", "do", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
