/********************************************************************************
** Form generated from reading UI file 'logwin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIN_H
#define UI_LOGWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logWin
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *IP_CON;
    QLineEdit *IP_INPUT;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *USR_CON;
    QLineEdit *USR_INPUT;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ConnectButton;
    QPushButton *CloseButton;

    void setupUi(QDialog *logWin)
    {
        if (logWin->objectName().isEmpty())
            logWin->setObjectName(QStringLiteral("logWin"));
        logWin->resize(375, 179);
        horizontalLayoutWidget = new QWidget(logWin);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 20, 311, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        IP_CON = new QLabel(horizontalLayoutWidget);
        IP_CON->setObjectName(QStringLiteral("IP_CON"));

        horizontalLayout->addWidget(IP_CON);

        IP_INPUT = new QLineEdit(horizontalLayoutWidget);
        IP_INPUT->setObjectName(QStringLiteral("IP_INPUT"));

        horizontalLayout->addWidget(IP_INPUT);

        horizontalLayoutWidget_2 = new QWidget(logWin);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 70, 311, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        USR_CON = new QLabel(horizontalLayoutWidget_2);
        USR_CON->setObjectName(QStringLiteral("USR_CON"));

        horizontalLayout_2->addWidget(USR_CON);

        USR_INPUT = new QLineEdit(horizontalLayoutWidget_2);
        USR_INPUT->setObjectName(QStringLiteral("USR_INPUT"));

        horizontalLayout_2->addWidget(USR_INPUT);

        horizontalLayoutWidget_3 = new QWidget(logWin);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 120, 311, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ConnectButton = new QPushButton(horizontalLayoutWidget_3);
        ConnectButton->setObjectName(QStringLiteral("ConnectButton"));

        horizontalLayout_3->addWidget(ConnectButton);

        CloseButton = new QPushButton(horizontalLayoutWidget_3);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        horizontalLayout_3->addWidget(CloseButton);


        retranslateUi(logWin);

        QMetaObject::connectSlotsByName(logWin);
    } // setupUi

    void retranslateUi(QDialog *logWin)
    {
        logWin->setWindowTitle(QApplication::translate("logWin", "Game Connect", 0));
        IP_CON->setText(QApplication::translate("logWin", "Server IP:", 0));
        IP_INPUT->setText(QApplication::translate("logWin", "166.111.69.245", 0));
        USR_CON->setText(QApplication::translate("logWin", "Username:", 0));
        USR_INPUT->setText(QApplication::translate("logWin", "LyricZ", 0));
        ConnectButton->setText(QApplication::translate("logWin", "Connect", 0));
        CloseButton->setText(QApplication::translate("logWin", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class logWin: public Ui_logWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIN_H
