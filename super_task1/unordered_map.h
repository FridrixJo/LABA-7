#ifndef UNORDERED_MAP_H
#define UNORDERED_MAP_H

#include <QMainWindow>

namespace Ui {
class Unordered_map;
}

class Unordered_map : public QMainWindow
{
    Q_OBJECT

public:
    explicit Unordered_map(QWidget *parent = nullptr);
    ~Unordered_map();

signals:
    void backToMain();

private slots:
    void on_back_Umap_clicked();

private:
    Ui::Unordered_map *ui;
};

#endif // UNORDERED_MAP_H
