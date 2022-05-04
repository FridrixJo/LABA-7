#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(600,400);

    setWindow = new Set();
    mapWindow = new Map();
    u_mapWindow = new Unordered_map();

    connect(setWindow,&Set::backToMain,this,&MainWindow::openWindow);
    connect(mapWindow,&Map::backToMain,this,&MainWindow::openWindow);
    connect(u_mapWindow,&Unordered_map::backToMain,this,&MainWindow::openWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_set_clicked()
{
    this->hide();
    setWindow->show();
}


void MainWindow::on_map_clicked()
{
    this->hide();
    mapWindow->show();
}


void MainWindow::on_unordered_map_clicked()
{
    this->hide();
    u_mapWindow->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}

void MainWindow::openWindow()
{
    this->show();
}

