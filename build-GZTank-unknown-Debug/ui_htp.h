/********************************************************************************
** Form generated from reading UI file 'htp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTP_H
#define UI_HTP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_HTP
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *HTP)
    {
        if (HTP->objectName().isEmpty())
            HTP->setObjectName(QStringLiteral("HTP"));
        HTP->resize(418, 282);
        buttonBox = new QDialogButtonBox(HTP);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(180, 240, 81, 41));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        textBrowser = new QTextBrowser(HTP);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 381, 211));

        retranslateUi(HTP);
        QObject::connect(buttonBox, SIGNAL(accepted()), HTP, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HTP, SLOT(reject()));

        QMetaObject::connectSlotsByName(HTP);
    } // setupUi

    void retranslateUi(QDialog *HTP)
    {
        HTP->setWindowTitle(QApplication::translate("HTP", "How To Play", 0));
        textBrowser->setHtml(QApplication::translate("HTP", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">1. Connect to </span><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">WiFi Camera</span><span style=\" font-size:18pt; font-weight:600;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">2. Connect to </span><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Bluetooth Controller</span><span style=\" font-size:18pt; font-weight:600;\">.</span></"
                        "p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">3. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">W</span><span style=\" font-size:18pt; font-weight:600;\"> to go forward.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">4. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">S</span><span style=\" font-size:18pt; font-weight:600;\"> to go backward.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">5. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">A</span><span style=\" font-size:18pt; font-weight:600;\"> to turn left.</span></p>"
                        "\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">6. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">D</span><span style=\" font-size:18pt; font-weight:600;\"> to turn right.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">7. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">Space</span><span style=\" font-size:18pt; font-weight:600;\"> to shoot.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">8. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">Z</span><span style=\" font-size:18pt; font-weight:600;\"> to flash(Camera).</span></p>"
                        "\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">9. Press </span><span style=\" font-size:18pt; font-weight:600; color:#fc0107;\">X</span><span style=\" font-size:18pt; font-weight:600;\"> to use EMP(Cannon Control).</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class HTP: public Ui_HTP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTP_H
