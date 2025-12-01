/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
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
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *filetoolbar)
    {
        if (filetoolbar->objectName().isEmpty())
            filetoolbar->setObjectName("filetoolbar");
        filetoolbar->resize(800, 600);
        actionNew = new QAction(filetoolbar);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(filetoolbar);
        actionOpen->setObjectName("actionOpen");
        actionClose = new QAction(filetoolbar);
        actionClose->setObjectName("actionClose");
        actionSave = new QAction(filetoolbar);
        actionSave->setObjectName("actionSave");
        action_Asave = new QAction(filetoolbar);
        action_Asave->setObjectName("action_Asave");
        actionquit = new QAction(filetoolbar);
        actionquit->setObjectName("actionquit");
        actionUndo = new QAction(filetoolbar);
        actionUndo->setObjectName("actionUndo");
        actionCuT = new QAction(filetoolbar);
        actionCuT->setObjectName("actionCuT");
        actionCopy = new QAction(filetoolbar);
        actionCopy->setObjectName("actionCopy");
        actionAll = new QAction(filetoolbar);
        actionAll->setObjectName("actionAll");
        actionPaste = new QAction(filetoolbar);
        actionPaste->setObjectName("actionPaste");
        actionPaste->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(filetoolbar);
        centralwidget->setObjectName("centralwidget");
        filetoolbar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(filetoolbar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        filetoolbar->setMenuBar(menubar);
        statusbar = new QStatusBar(filetoolbar);
        statusbar->setObjectName("statusbar");
        filetoolbar->setStatusBar(statusbar);
        toolBar = new QToolBar(filetoolbar);
        toolBar->setObjectName("toolBar");
        filetoolbar->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
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
        menu->setTitle(QCoreApplication::translate("filetoolbar", "\346\252\224\346\241\210(&F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("filetoolbar", "\347\267\250\350\274\257(&E)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("filetoolbar", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filetoolbar: public Ui_filetoolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
