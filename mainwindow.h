#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

class mainwindow : public QMainWindow,
                   public Ui_filetoolbar
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
};
#endif // MAINWINDOW_H
