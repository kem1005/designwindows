/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filetoolbar
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *action_Asave;
    QAction *actionquit;
    QAction *actionUndo;
    QAction *actionCuT;
    QAction *actionCopy;
    QAction *actionAll;
    QAction *actionPaste;
    QAction *actionInsertTable;
    QAction *actionInsertRow;
    QAction *actionInsertColumn;
    QAction *actionDeleteRow;
    QAction *actionDeleteColumn;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *filetoolbar)
    {
        if (filetoolbar->objectName().isEmpty())
            filetoolbar->setObjectName("filetoolbar");
        filetoolbar->resize(800, 600);
        actionNew = new QAction(filetoolbar);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/images/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(filetoolbar);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/images/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(filetoolbar);
        actionClose->setObjectName("actionClose");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/images/close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClose->setIcon(icon2);
        actionSave = new QAction(filetoolbar);
        actionSave->setObjectName("actionSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/images/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon3);
        action_Asave = new QAction(filetoolbar);
        action_Asave->setObjectName("action_Asave");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/images/asave.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Asave->setIcon(icon4);
        actionquit = new QAction(filetoolbar);
        actionquit->setObjectName("actionquit");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/images/off.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionquit->setIcon(icon5);
        actionUndo = new QAction(filetoolbar);
        actionUndo->setObjectName("actionUndo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/images/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon6);
        actionCuT = new QAction(filetoolbar);
        actionCuT->setObjectName("actionCuT");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/images/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCuT->setIcon(icon7);
        actionCopy = new QAction(filetoolbar);
        actionCopy->setObjectName("actionCopy");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/images/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon8);
        actionAll = new QAction(filetoolbar);
        actionAll->setObjectName("actionAll");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/images/all.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAll->setIcon(icon9);
        actionPaste = new QAction(filetoolbar);
        actionPaste->setObjectName("actionPaste");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/images/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon10);
        actionPaste->setMenuRole(QAction::MenuRole::NoRole);
        actionInsertTable = new QAction(filetoolbar);
        actionInsertTable->setObjectName("actionInsertTable");
        actionInsertRow = new QAction(filetoolbar);
        actionInsertRow->setObjectName("actionInsertRow");
        actionInsertColumn = new QAction(filetoolbar);
        actionInsertColumn->setObjectName("actionInsertColumn");
        actionDeleteRow = new QAction(filetoolbar);
        actionDeleteRow->setObjectName("actionDeleteRow");
        actionDeleteColumn = new QAction(filetoolbar);
        actionDeleteColumn->setObjectName("actionDeleteColumn");
        centralwidget = new QWidget(filetoolbar);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        filetoolbar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(filetoolbar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        filetoolbar->setMenuBar(menubar);
        statusbar = new QStatusBar(filetoolbar);
        statusbar->setObjectName("statusbar");
        filetoolbar->setStatusBar(statusbar);
        toolBar = new QToolBar(filetoolbar);
        toolBar->setObjectName("toolBar");
        filetoolbar->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionClose);
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addAction(action_Asave);
        menu->addSeparator();
        menu->addAction(actionquit);
        menu_2->addAction(actionUndo);
        menu_2->addAction(actionCuT);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionAll);
        menu_3->addAction(actionInsertTable);
        menu_3->addSeparator();
        menu_3->addAction(actionInsertRow);
        menu_3->addAction(actionInsertColumn);
        menu_3->addSeparator();
        menu_3->addAction(actionDeleteRow);
        menu_3->addAction(actionDeleteColumn);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(action_Asave);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionCuT);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);

        retranslateUi(filetoolbar);

        QMetaObject::connectSlotsByName(filetoolbar);
    } // setupUi

    void retranslateUi(QMainWindow *filetoolbar)
    {
        filetoolbar->setWindowTitle(QCoreApplication::translate("filetoolbar", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("filetoolbar", "\346\226\260\345\242\236(&N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("filetoolbar", "\351\226\213\345\225\237(&O)", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("filetoolbar", "\351\227\234\351\226\211(&C)", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("filetoolbar", "\345\204\262\345\255\230(&S)", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Asave->setText(QCoreApplication::translate("filetoolbar", "\345\217\246\345\255\230(&A)", nullptr));
#if QT_CONFIG(shortcut)
        action_Asave->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionquit->setText(QCoreApplication::translate("filetoolbar", "\351\200\200\345\207\272(&X)", nullptr));
#if QT_CONFIG(shortcut)
        actionquit->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("filetoolbar", "\351\202\204\345\216\237(&U)", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCuT->setText(QCoreApplication::translate("filetoolbar", "\345\211\252\344\270\213(&T)", nullptr));
#if QT_CONFIG(tooltip)
        actionCuT->setToolTip(QCoreApplication::translate("filetoolbar", "\345\211\252\344\270\213(T)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCuT->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("filetoolbar", "\350\244\207\350\243\275(&C)", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAll->setText(QCoreApplication::translate("filetoolbar", "\345\205\250\351\201\270(&A)", nullptr));
#if QT_CONFIG(shortcut)
        actionAll->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("filetoolbar", "\350\262\274\344\270\212(&P)", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("filetoolbar", "\350\262\274\344\270\212(P)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("filetoolbar", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInsertTable->setText(QCoreApplication::translate("filetoolbar", "\346\217\222\345\205\245\350\241\250\346\240\274(&I)", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertTable->setToolTip(QCoreApplication::translate("filetoolbar", "\346\217\222\345\205\245\350\241\250\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertRow->setText(QCoreApplication::translate("filetoolbar", "\346\226\260\345\242\236\344\270\200\350\241\214(&R)", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertRow->setToolTip(QCoreApplication::translate("filetoolbar", "\346\226\260\345\242\236\344\270\200\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertColumn->setText(QCoreApplication::translate("filetoolbar", "\346\226\260\345\242\236\344\270\200\345\210\227(&C)", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertColumn->setToolTip(QCoreApplication::translate("filetoolbar", "\346\226\260\345\242\236\344\270\200\345\210\227", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteRow->setText(QCoreApplication::translate("filetoolbar", "\345\210\252\351\231\244\350\241\214(&D)", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteRow->setToolTip(QCoreApplication::translate("filetoolbar", "\345\210\252\351\231\244\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteColumn->setText(QCoreApplication::translate("filetoolbar", "\345\210\252\351\231\244\345\210\227(&L)", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteColumn->setToolTip(QCoreApplication::translate("filetoolbar", "\345\210\252\351\231\244\345\210\227", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("filetoolbar", "\346\252\224\346\241\210(&F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("filetoolbar", "\347\267\250\350\274\257(&E)", nullptr));
        menu_3->setTitle(QCoreApplication::translate("filetoolbar", "\350\241\250\346\240\274(&T)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("filetoolbar", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filetoolbar: public Ui_filetoolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
