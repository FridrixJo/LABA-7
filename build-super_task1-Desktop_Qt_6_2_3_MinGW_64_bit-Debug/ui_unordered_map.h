/********************************************************************************
** Form generated from reading UI file 'unordered_map.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNORDERED_MAP_H
#define UI_UNORDERED_MAP_H

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

class Ui_Unordered_map
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *back_Umap;
    QLabel *label;
    QComboBox *comboBox_Umap;
    QPushButton *do_Umap;
    QLabel *label_2;
    QLineEdit *lineEdit_Umap;
    QSpinBox *spinBox_Umap;
    QLabel *label_3;

    void setupUi(QMainWindow *Unordered_map)
    {
        if (Unordered_map->objectName().isEmpty())
            Unordered_map->setObjectName(QString::fromUtf8("Unordered_map"));
        Unordered_map->resize(640, 480);
        centralwidget = new QWidget(Unordered_map);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 480));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);"));
        back_Umap = new QPushButton(centralwidget);
        back_Umap->setObjectName(QString::fromUtf8("back_Umap"));
        back_Umap->setGeometry(QRect(20, 20, 111, 31));
        back_Umap->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 10, 271, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        comboBox_Umap = new QComboBox(centralwidget);
        comboBox_Umap->setObjectName(QString::fromUtf8("comboBox_Umap"));
        comboBox_Umap->setGeometry(QRect(50, 90, 150, 35));
        do_Umap = new QPushButton(centralwidget);
        do_Umap->setObjectName(QString::fromUtf8("do_Umap"));
        do_Umap->setGeometry(QRect(230, 90, 111, 31));
        do_Umap->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 80, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        lineEdit_Umap = new QLineEdit(centralwidget);
        lineEdit_Umap->setObjectName(QString::fromUtf8("lineEdit_Umap"));
        lineEdit_Umap->setGeometry(QRect(460, 90, 141, 31));
        lineEdit_Umap->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";\n"
"color: rgb(0, 0, 255)"));
        spinBox_Umap = new QSpinBox(centralwidget);
        spinBox_Umap->setObjectName(QString::fromUtf8("spinBox_Umap"));
        spinBox_Umap->setGeometry(QRect(460, 130, 71, 31));
        spinBox_Umap->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";\n"
"color: rgb(0, 0, 255)"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 120, 91, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        Unordered_map->setCentralWidget(centralwidget);

        retranslateUi(Unordered_map);

        QMetaObject::connectSlotsByName(Unordered_map);
    } // setupUi

    void retranslateUi(QMainWindow *Unordered_map)
    {
        Unordered_map->setWindowTitle(QCoreApplication::translate("Unordered_map", "MainWindow", nullptr));
        back_Umap->setText(QCoreApplication::translate("Unordered_map", "back", nullptr));
        label->setText(QCoreApplication::translate("Unordered_map", "unordered_map<std::string,int>", nullptr));
        do_Umap->setText(QCoreApplication::translate("Unordered_map", "do", nullptr));
        label_2->setText(QCoreApplication::translate("Unordered_map", "Key :", nullptr));
        label_3->setText(QCoreApplication::translate("Unordered_map", "Data :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Unordered_map: public Ui_Unordered_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNORDERED_MAP_H
