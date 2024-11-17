/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QWidget *topWidget;
    QPushButton *pbClose;
    QWidget *icon;
    QLabel *lbTitle;
    QPushButton *pushButton;
    QWidget *mainWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *guanwang;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(520, 290);
        topWidget = new QWidget(AboutDialog);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        topWidget->setGeometry(QRect(0, 0, 520, 290));
        topWidget->setAutoFillBackground(false);
        pbClose = new QPushButton(topWidget);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(490, 10, 16, 16));
        icon = new QWidget(topWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(10, 10, 20, 20));
        lbTitle = new QLabel(topWidget);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(40, 10, 111, 16));
        pushButton = new QPushButton(topWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 240, 71, 41));
        pbClose->raise();
        icon->raise();
        lbTitle->raise();
        pushButton->raise();
        mainWidget = new QWidget(AboutDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setGeometry(QRect(0, 37, 521, 261));
        label_2 = new QLabel(mainWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 171, 16));
        label_3 = new QLabel(mainWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 140, 161, 16));
        guanwang = new QLabel(mainWidget);
        guanwang->setObjectName(QString::fromUtf8("guanwang"));
        guanwang->setGeometry(QRect(40, 170, 231, 16));

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
        pbClose->setText(QString());
        lbTitle->setText(QCoreApplication::translate("AboutDialog", "360\345\256\211\345\205\250\345\215\253\345\243\253", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutDialog", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "\344\270\273\347\250\213\345\272\217\347\211\210\346\234\254: 11(11.0.0.1001)", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "\345\244\207\347\224\250\346\234\250\351\251\254\345\272\223: 2017-03-17", nullptr));
        guanwang->setText(QCoreApplication::translate("AboutDialog", "Copyright(c) 360.cn Inc. All Rights Reserved", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
