#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(640,480);

    ui->comboBox_all->addItems(QStringList() << " set() " << " reset() " << " all() " << " any() " << " none() " << " size() " << " to_string() " << " to_ulong() " << " to_ullong() " << " flip() ");

    ui->comboBox_one->addItems(QStringList() << " set(int) " << " reset(int) " << " flip(int) " << " test(int) ");

    ui->spinBox->setRange(0,63);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set()
{
    a.set();
}

void MainWindow::reset()
{
    a.reset();
}

void MainWindow::all()
{
    ui->info->clear();
    if(a.all())
         ui->info->setText("All bits are set");
    else
         ui->info->setText("Not all bits are set");
}

void MainWindow::any()
{
    ui->info->clear();
    if(a.any())
         ui->info->setText("There are bits which are set");
    else
         ui->info->setText("There are no any bits which are set");
}

void MainWindow::none()
{
    ui->info->clear();
    if(a.none())
         ui->info->setText("All bits are reset");
    else
         ui->info->setText("Not all bits are reset");
}

void MainWindow::size()
{
    ui->info->clear();
    ui->info->setText("Size of bitset is 64");
}

void MainWindow::to_string()
{
    ui->textEdit->clear();
    std::string s = a.to_string();
    ui->textEdit->setText(QString::fromStdString(s));
}

void MainWindow::to_ulong()
{
    ui->textEdit->clear();
    unsigned long n = a.to_ulong();
    QString s;
    ui->textEdit->setText(s.setNum(n));
}

void MainWindow::to_ullong()
{
    ui->textEdit->clear();
    unsigned long long n = a.to_ullong();
    QString s;
    ui->textEdit->setText(s.setNum(n));
}

void MainWindow::setI()
{
    int i = ui->spinBox->value();
    a.set(i);
}

void MainWindow::resetI()
{
    int i = ui->spinBox->value();
    a.reset(i);
}

void MainWindow::flipI()
{
    int i = ui->spinBox->value();
    a.flip(i);
}

void MainWindow::testI()
{
    ui->info->clear();
    int i = ui->spinBox->value();
    if(a.test(i))
        ui->info->setText("This bit is set");
    else
        ui->info->setText("This bit is reset");
}

void MainWindow::flip()
{
    a.flip();
}


void MainWindow::on_do_all_clicked()
{
    int i = ui->comboBox_all->currentIndex();
    switch(i){
    case 0:
        set();
        to_string();
        break;
    case 1:
        reset();
        to_string();
        break;
    case 2:
        all();
        break;
    case 3:
        any();
        break;
    case 4:
        none();
        break;
    case 5:
        size();
        break;
    case 6:
        to_string();
        break;
    case 7:
        to_ulong();
        break;
    case 8:
        to_ullong();
        break;
    case 9:
        flip();
        to_string();
        break;
    }
}


void MainWindow::on_do_one_clicked()
{
    int i = ui->comboBox_one->currentIndex();
    switch(i){
    case 0:
        setI();
        to_string();
        break;
    case 1:
        resetI();
        to_string();
        break;
    case 2:
        flipI();
        to_string();
        break;
    case 3:
        testI();
        break;
    }
}

