#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "set.h"
#include "map.h"
#include "unordered_map.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_set_clicked();

    void on_map_clicked();

    void on_unordered_map_clicked();

    void on_pushButton_4_clicked();

public slots:
    void openWindow();

private:
    Ui::MainWindow *ui;
    Set* setWindow;
    Map* mapWindow;
    Unordered_map* u_mapWindow;
};
#endif // MAINWINDOW_H
