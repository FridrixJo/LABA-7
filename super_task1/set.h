#ifndef SET_H
#define SET_H

#include <QMainWindow>
#include "SetSource.h"
#include <QMessageBox>

namespace Ui {
class Set;
}

class Set : public QMainWindow
{
    Q_OBJECT

public:
    explicit Set(QWidget *parent = nullptr);
    ~Set();

signals:
    void backToMain();

private:
    void insertSet();
    void eraseSet();
    void sizeSet();
    void emptySet();
    void findSet();
    void containsSet();
    void clearSet();
    void beginSet();
    void backSet();
    void emplaceSet();
    void lower_boundSet();
    void upper_boundSet();

    void print();

private slots:
    void on_back_set_clicked();

    void on_do_set_clicked();

private:
    Ui::Set *ui;
    set<int> m_set;
};

#endif // SET_H
