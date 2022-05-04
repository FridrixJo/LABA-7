#include "unordered_map.h"
#include "ui_unordered_map.h"

Unordered_map::Unordered_map(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Unordered_map)
{
    ui->setupUi(this);

    setFixedSize(640,480);

    ui->comboBox_Umap->addItems(QStringList() << " insert " << " insert_or_assing " << " erase " << " size " << " max_size " << " empty " << " find " << " contains " << " rehash " << " reserve " << " clear " << " begin " << " back ");

    ui->spinBox_Umap->setAlignment(Qt::AlignCenter);
}

Unordered_map::~Unordered_map()
{
    delete ui;
}

void Unordered_map::on_back_Umap_clicked()
{
    this->hide();
    emit backToMain();
}

