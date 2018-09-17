/********************************************************************************
** Form generated from reading UI file 'conwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONWINDOW_H
#define UI_CONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConWindow
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *Bluebooth;
    QLabel *CSP_const;
    QComboBox *comboBox;
    QLabel *ASP_const;
    QPushButton *ConnectButton;
    QLabel *CUR;
    QWidget *WiFi;
    QLineEdit *WiFiAddress;
    QLabel *Rounter_const;
    QPushButton *SaveButton;

    void setupUi(QDialog *ConWindow)
    {
        if (ConWindow->objectName().isEmpty())
            ConWindow->setObjectName(QStringLiteral("ConWindow"));
        ConWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(ConWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 260, 81, 31));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        tabWidget = new QTabWidget(ConWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(29, 10, 351, 251));
        Bluebooth = new QWidget();
        Bluebooth->setObjectName(QStringLiteral("Bluebooth"));
        CSP_const = new QLabel(Bluebooth);
        CSP_const->setObjectName(QStringLiteral("CSP_const"));
        CSP_const->setGeometry(QRect(20, 160, 301, 20));
        comboBox = new QComboBox(Bluebooth);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 40, 311, 21));
        comboBox->setEditable(false);
        ASP_const = new QLabel(Bluebooth);
        ASP_const->setObjectName(QStringLiteral("ASP_const"));
        ASP_const->setGeometry(QRect(20, 10, 191, 16));
        ConnectButton = new QPushButton(Bluebooth);
        ConnectButton->setObjectName(QStringLiteral("ConnectButton"));
        ConnectButton->setGeometry(QRect(110, 70, 113, 32));
        CUR = new QLabel(Bluebooth);
        CUR->setObjectName(QStringLiteral("CUR"));
        CUR->setGeometry(QRect(20, 190, 301, 16));
        CUR->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextEditable);
        tabWidget->addTab(Bluebooth, QString());
        WiFi = new QWidget();
        WiFi->setObjectName(QStringLiteral("WiFi"));
        WiFiAddress = new QLineEdit(WiFi);
        WiFiAddress->setObjectName(QStringLiteral("WiFiAddress"));
        WiFiAddress->setGeometry(QRect(20, 80, 301, 21));
        Rounter_const = new QLabel(WiFi);
        Rounter_const->setObjectName(QStringLiteral("Rounter_const"));
        Rounter_const->setGeometry(QRect(20, 50, 151, 16));
        SaveButton = new QPushButton(WiFi);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setGeometry(QRect(110, 110, 113, 32));
        tabWidget->addTab(WiFi, QString());

        retranslateUi(ConWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConWindow, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConWindow);
    } // setupUi

    void retranslateUi(QDialog *ConWindow)
    {
        ConWindow->setWindowTitle(QApplication::translate("ConWindow", "Connection", 0));
        CSP_const->setText(QApplication::translate("ConWindow", "Current Serial Port:", 0));
        ASP_const->setText(QApplication::translate("ConWindow", "Available Serial Port:", 0));
        ConnectButton->setText(QApplication::translate("ConWindow", "Connect", 0));
        CUR->setText(QApplication::translate("ConWindow", "CUR_CONTEXT", 0));
        tabWidget->setTabText(tabWidget->indexOf(Bluebooth), QApplication::translate("ConWindow", "Bluebooth", 0));
        WiFiAddress->setText(QApplication::translate("ConWindow", "192.168.4.1", 0));
        Rounter_const->setText(QApplication::translate("ConWindow", "Camera Rounter URL:", 0));
        SaveButton->setText(QApplication::translate("ConWindow", "Save", 0));
        tabWidget->setTabText(tabWidget->indexOf(WiFi), QApplication::translate("ConWindow", "WiFi", 0));
    } // retranslateUi

};

namespace Ui {
    class ConWindow: public Ui_ConWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONWINDOW_H
