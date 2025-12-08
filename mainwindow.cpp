#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    
    // Connect actions to slots
    connect(actionOpen, &QAction::triggered, this, &MainWindow::onActionOpen);
    connect(actionSave, &QAction::triggered, this, &MainWindow::onActionSave);
}

MainWindow::~MainWindow() {}

void MainWindow::onActionOpen()
{
    // Open file dialog to select a file
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("開啟檔案"), "", tr("文字檔案 (*.txt);;所有檔案 (*)"));
    
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, tr("錯誤"), tr("無法開啟檔案"));
            return;
        }
        
        QTextStream in(&file);
        textEdit->setText(in.readAll());
        file.close();
    }
}

void MainWindow::onActionSave()
{
    // Save to the specified path
    QString fileName = "C:/Users/user/Desktop/ex/txt/1.txt";
    
    // Create directory if it doesn't exist
    QFileInfo fileInfo(fileName);
    QDir dir = fileInfo.dir();
    if (!dir.exists()) {
        dir.mkpath(".");
    }
    
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("錯誤"), 
            tr("無法儲存檔案至 %1").arg(fileName));
        return;
    }
    
    QTextStream out(&file);
    out << textEdit->toPlainText();
    file.close();
    
    QMessageBox::information(this, tr("成功"), 
        tr("檔案已儲存至 %1").arg(fileName));
}
