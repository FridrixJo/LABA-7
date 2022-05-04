/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

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

class Ui_Set
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *back_set;
    QLabel *label;
    QComboBox *comboBox_set;
    QPushButton *do_set;
    QLabel *label_2;
    QSpinBox *spinBox_set;
    QTextEdit *MainSet;
    QTextEdit *InfoSet;

    void setupUi(QMainWindow *Set)
    {
        if (Set->objectName().isEmpty())
            Set->setObjectName(QString::fromUtf8("Set"));
        Set->resize(640, 480);
        centralwidget = new QWidget(Set);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 640, 480));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        back_set = new QPushButton(centralwidget);
        back_set->setObjectName(QString::fromUtf8("back_set"));
        back_set->setGeometry(QRect(20, 20, 111, 31));
        back_set->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 10, 71, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        comboBox_set = new QComboBox(centralwidget);
        comboBox_set->setObjectName(QString::fromUtf8("comboBox_set"));
        comboBox_set->setGeometry(QRect(50, 90, 150, 35));
        do_set = new QPushButton(centralwidget);
        do_set->setObjectName(QString::fromUtf8("do_set"));
        do_set->setGeometry(QRect(230, 90, 111, 31));
        do_set->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:7px;\n"
"font: 700 20pt \"System\";\n"
"color:rgb(0, 0, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 90, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"System\";\n"
"color:rgb(255, 255, 255)"));
        spinBox_set = new QSpinBox(centralwidget);
        spinBox_set->setObjectName(QString::fromUtf8("spinBox_set"));
        spinBox_set->setGeometry(QRect(490, 90, 71, 31));
        spinBox_set->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 20pt \"System\";\n"
"color: rgb(0, 0, 255)"));
        MainSet = new QTextEdit(centralwidget);
        MainSet->setObjectName(QString::fromUtf8("MainSet"));
        MainSet->setGeometry(QRect(50, 210, 281, 200));
        InfoSet = new QTextEdit(centralwidget);
        InfoSet->setObjectName(QString::fromUtf8("InfoSet"));
        InfoSet->setGeometry(QRect(420, 210, 171, 201));
        Set->setCentralWidget(centralwidget);

        retranslateUi(Set);

        QMetaObject::connectSlotsByName(Set);
    } // setupUi

    void retranslateUi(QMainWindow *Set)
    {
        Set->setWindowTitle(QCoreApplication::translate("Set", "MainWindow", nullptr));
        back_set->setText(QCoreApplication::translate("Set", "back", nullptr));
        label->setText(QCoreApplication::translate("Set", "set<int>", nullptr));
        do_set->setText(QCoreApplication::translate("Set", "do", nullptr));
        label_2->setText(QCoreApplication::translate("Set", "Key :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Set: public Ui_Set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
