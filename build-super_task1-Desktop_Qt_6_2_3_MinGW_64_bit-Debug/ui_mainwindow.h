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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *set;
    QPushButton *map;
    QPushButton *unordered_map;
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        set = new QPushButton(centralwidget);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(205, 110, 190, 45));
        set->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        map = new QPushButton(centralwidget);
        map->setObjectName(QString::fromUtf8("map"));
        map->setGeometry(QRect(205, 170, 190, 45));
        map->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        unordered_map = new QPushButton(centralwidget);
        unordered_map->setObjectName(QString::fromUtf8("unordered_map"));
        unordered_map->setGeometry(QRect(205, 230, 190, 45));
        unordered_map->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 600, 400));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 40, 191, 51));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 340, 81, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(255, 0, 0)"));
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        set->raise();
        map->raise();
        unordered_map->raise();
        label->raise();
        pushButton_4->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        set->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        map->setText(QCoreApplication::translate("MainWindow", "map", nullptr));
        unordered_map->setText(QCoreApplication::translate("MainWindow", "unordered_map", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Choose a container", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
