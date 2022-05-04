#include "map.h"
#include "ui_map.h"

Map::Map(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);

    setFixedSize(640,480);

    ui->comboBox_map->addItems(QStringList() << " insert " << " insert_or_assing " << " erase " << " size " << " empty " << " find " << " contains " << " clear " << " begin " << " back " << " lower_bound " << " upper_bound ");

    ui->spinBox_map->setAlignment(Qt::AlignCenter);
}

Map::~Map()
{
    delete ui;
}

void Map::on_back_map_clicked()
{
    this->hide();
    emit backToMain();
}

