/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CC_Button;
    QPushButton *G_Button;
    QPushButton *HTP_Button;
    QPushButton *A_Button;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(975, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 210, 911, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CC_Button = new QPushButton(horizontalLayoutWidget);
        CC_Button->setObjectName(QStringLiteral("CC_Button"));

        horizontalLayout->addWidget(CC_Button);

        G_Button = new QPushButton(horizontalLayoutWidget);
        G_Button->setObjectName(QStringLiteral("G_Button"));

        horizontalLayout->addWidget(G_Button);

        HTP_Button = new QPushButton(horizontalLayoutWidget);
        HTP_Button->setObjectName(QStringLiteral("HTP_Button"));

        horizontalLayout->addWidget(HTP_Button);

        A_Button = new QPushButton(horizontalLayoutWidget);
        A_Button->setObjectName(QStringLiteral("A_Button"));

        horizontalLayout->addWidget(A_Button);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 871, 211));
        label->setPixmap(QPixmap(QString::fromUtf8(":/tank.png")));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GZTank", 0));
        CC_Button->setText(QApplication::translate("MainWindow", "Local Connect", 0));
        G_Button->setText(QApplication::translate("MainWindow", "Game Connect", 0));
        HTP_Button->setText(QApplication::translate("MainWindow", "How to Play", 0));
        A_Button->setText(QApplication::translate("MainWindow", "About", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
