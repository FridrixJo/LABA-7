#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <any>
#include "../../LABA$7/bitset/bitset.h"

QT_BEGIN_NAMESPACE

namespace std { class any; }
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_do_all_clicked();

    void on_do_one_clicked();

private:
    void set();
    void reset();
    void all();
    void any();
    void none();
    void size();
    void to_string();
    void to_ulong();
    void to_ullong();
    void setI();
    void resetI();
    void flipI();
    void testI();
    void flip();


private:
    Ui::MainWindow *ui;
    bitset<64> a;
};
#endif // MAINWINDOW_H
