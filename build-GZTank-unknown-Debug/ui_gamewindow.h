/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QTextBrowser *console;
    QLabel *Console_CON;
    QLabel *StautsBar;
    QLabel *Camera;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(932, 847);
        console = new QTextBrowser(GameWindow);
        console->setObjectName(QStringLiteral("console"));
        console->setGeometry(QRect(20, 660, 891, 141));
        Console_CON = new QLabel(GameWindow);
        Console_CON->setObjectName(QStringLiteral("Console_CON"));
        Console_CON->setGeometry(QRect(20, 640, 60, 16));
        StautsBar = new QLabel(GameWindow);
        StautsBar->setObjectName(QStringLiteral("StautsBar"));
        StautsBar->setGeometry(QRect(20, 810, 891, 20));
        StautsBar->setAlignment(Qt::AlignCenter);
        Camera = new QLabel(GameWindow);
        Camera->setObjectName(QStringLiteral("Camera"));
        Camera->setGeometry(QRect(20, 10, 891, 631));
        Camera->setAlignment(Qt::AlignCenter);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QDialog *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "GAME@GZ_TANK", 0));
        Console_CON->setText(QApplication::translate("GameWindow", "Console:", 0));
        StautsBar->setText(QApplication::translate("GameWindow", "STATUS BAR IS READY TO CONNECT TO GAME SERVER", 0));
        Camera->setText(QApplication::translate("GameWindow", "CAMERA IS READY FOR WIFI CONNECTION", 0));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
