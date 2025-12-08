#include "mainwindow.h"  // 引入自己定義的 MainWindow 類別頭檔
#include <QFileDialog>    // 用於檔案選擇視窗
#include <QFile>          // 用於操作檔案
#include <QTextStream>    // 字串流，讀寫文字檔案用
#include <QMessageBox>    // 用於跳出提示視窗
#include <QDir>           // 用於目錄操作

// MainWindow 類別建構子
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);        // 初始化 UI 配置（自動產生）

    // 將觸發事件（如選單）與對應函式綁定
    connect(actionOpen, &QAction::triggered, this, &MainWindow::onActionOpen); // "開啟檔案"觸發 onActionOpen
    connect(actionSave, &QAction::triggered, this, &MainWindow::onActionSave); // "儲存檔案"觸發 onActionSave
}

// MainWindow 解構子
MainWindow::~MainWindow() {}

// 開啟檔案事件函式
void MainWindow::onActionOpen()
{
    // 彈出檔案選擇視窗，讓使用者選檔
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("開啟檔案"),             // 視窗標題
        "",                        // 預設路徑（目前目錄）
        tr("文字檔案 (*.txt);;所有檔案 (*)") // 檔案類型過濾器
        );

    if (!fileName.isEmpty()) {     // 判斷使用者有選檔案
        QFile file(fileName);      // 建立檔案物件

        // 嘗試開檔（唯讀模式/文字檔）
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // 若開檔失敗，彈出錯誤訊息
            QMessageBox::warning(
                this,
                tr("錯誤"),
                tr("無法開啟檔案")
                );
            return;                // 跳出函式
        }

        QTextStream in(&file);     // 建立文字流，讀取內容
        textEdit->setText(in.readAll()); // 讀取所有內容，顯示於 textEdit
        file.close();              // 關閉檔案
    }
}

// 儲存檔案事件函式
void MainWindow::onActionSave()
{
    // 指定儲存路徑（固定路徑）
    QString fileName = "C:/Users/user/Desktop/ex/txt/1.txt";

    // 檢查並建立目錄（如不存在則新建）
    QFileInfo fileInfo(fileName);  // 取得檔案資訊
    QDir dir = fileInfo.dir();     // 取得檔案所在目錄
    if (!dir.exists()) {           // 若目錄不存在
        dir.mkpath(".");           // 新建目錄（.指目前路徑）
    }

    QFile file(fileName);          // 建立檔案物件
    // 嘗試開檔（寫入模式/文字檔）
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        // 開檔失敗，跳出錯誤訊息
        QMessageBox::warning(
            this,
            tr("錯誤"),
            tr("無法儲存檔案至 %1").arg(fileName)
            );
        return;                    // 跳出函式
    }

    QTextStream out(&file);        // 建立文字流，準備寫入
    out << textEdit->toPlainText();// 將 textEdit 內容寫入檔案
    file.close();                  // 關閉檔案

    // 顯示成功訊息，通知儲存完成
    QMessageBox::information(
        this,
        tr("成功"),
        tr("檔案已儲存至 %1").arg(fileName)
        );
}
