#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include "MapSource.h"
#include <QMessageBox>

namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

signals:
    void backToMain();

private:
    void insertMap();
    void insert_or_assignMap();
    void eraseMap();
    void sizeMap();
    void emptyMap();
    void findMap();
    void containsMap();
    void clearMap();
    void beginMap();
    void backMap();
    void lower_boundMap();
    void upper_boundMap();

    void print();

private slots:
    void on_back_map_clicked();

    void on_do_map_clicked();

private:
    Ui::Map *ui;
    map<std::string,int> m_map;
};

#endif // MAP_H
