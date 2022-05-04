#ifndef MAP_H
#define MAP_H

#include <QMainWindow>

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

private slots:
    void on_back_map_clicked();

private:
    Ui::Map *ui;
};

#endif // MAP_H
