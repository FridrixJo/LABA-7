/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *back_map;
    QLabel *label;
    QComboBox *comboBox_map;
    QPushButton *do_map;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_map;
    QLineEdit *lineEdit_map;

    void setupUi(QMainWindow *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(640, 480);
        centralwidget = new QWidget(Map);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 480));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        back_map = new QPushButton(centralwidget);
        back_map->setObjectName(QString::fromUtf8("back_map"));
        back_map->setGeometry(QRect(20, 20, 111, 31));
        back_map->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 10, 171, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        comboBox_map = new QComboBox(centralwidget);
        comboBox_map->setObjectName(QString::fromUtf8("comboBox_map"));
        comboBox_map->setGeometry(QRect(50, 90, 150, 35));
        do_map = new QPushButton(centralwidget);
        do_map->setObjectName(QString::fromUtf8("do_map"));
        do_map->setGeometry(QRect(230, 90, 111, 31));
        do_map->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 140, 171, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 200, 171, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        spinBox_map = new QSpinBox(centralwidget);
        spinBox_map->setObjectName(QString::fromUtf8("spinBox_map"));
        spinBox_map->setGeometry(QRect(310, 200, 71, 41));
        spinBox_map->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";\n"
"color: rgb(0, 0, 255)"));
        lineEdit_map = new QLineEdit(centralwidget);
        lineEdit_map->setObjectName(QString::fromUtf8("lineEdit_map"));
        lineEdit_map->setGeometry(QRect(310, 140, 141, 41));
        lineEdit_map->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";\n"
"color: rgb(0, 0, 255)"));
        Map->setCentralWidget(centralwidget);

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QMainWindow *Map)
    {
        Map->setWindowTitle(QCoreApplication::translate("Map", "MainWindow", nullptr));
        back_map->setText(QCoreApplication::translate("Map", "back", nullptr));
        label->setText(QCoreApplication::translate("Map", "map<std::string,int>", nullptr));
        do_map->setText(QCoreApplication::translate("Map", "do", nullptr));
        label_2->setText(QCoreApplication::translate("Map", "Key :", nullptr));
        label_3->setText(QCoreApplication::translate("Map", "Data :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
