#include "set.h"
#include "ui_set.h"

Set::Set(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Set)
{
    ui->setupUi(this);

    setFixedSize(640,480);

    ui->comboBox_set->addItems(QStringList() << " insert " << " erase " << " size " << " empty " << " find " << " contains " << " clear " << " begin " << " back " << " emplace " << " lower_bound " << " upper_bound ");

    ui->spinBox_set->setAlignment(Qt::AlignCenter);
}

Set::~Set()
{
    delete ui;
}

void Set::on_back_set_clicked()
{
    this->hide();
    emit backToMain();
}

