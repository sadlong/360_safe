/********************************************************************************
** Form generated from reading UI file 'upgradedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPGRADEDIALOG_H
#define UI_UPGRADEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <customviews/upgradewidget.h>

QT_BEGIN_NAMESPACE

class Ui_UpgradeDialog
{
public:
    QWidget *top;
    QWidget *icon;
    QLabel *label;
    QPushButton *close;
    QWidget *bottom;
    QLabel *version;
    QPushButton *pushButton;
    QWidget *middle;
    QLabel *title;
    QLabel *subtitle;
    UpgradeWidget *scan;

    void setupUi(QDialog *UpgradeDialog)
    {
        if (UpgradeDialog->objectName().isEmpty())
            UpgradeDialog->setObjectName(QString::fromUtf8("UpgradeDialog"));
        UpgradeDialog->resize(320, 430);
        top = new QWidget(UpgradeDialog);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(0, 0, 320, 170));
        icon = new QWidget(top);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(10, 10, 20, 20));
        label = new QLabel(top);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 121, 16));
        close = new QPushButton(top);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(290, 10, 20, 20));
        bottom = new QWidget(UpgradeDialog);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setGeometry(QRect(0, 380, 320, 50));
        version = new QLabel(bottom);
        version->setObjectName(QString::fromUtf8("version"));
        version->setGeometry(QRect(20, 20, 171, 16));
        pushButton = new QPushButton(bottom);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 10, 80, 30));
        middle = new QWidget(UpgradeDialog);
        middle->setObjectName(QString::fromUtf8("middle"));
        middle->setGeometry(QRect(0, 170, 320, 211));
        title = new QLabel(middle);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 110, 321, 31));
        subtitle = new QLabel(middle);
        subtitle->setObjectName(QString::fromUtf8("subtitle"));
        subtitle->setGeometry(QRect(0, 150, 321, 16));
        scan = new UpgradeWidget(UpgradeDialog);
        scan->setObjectName(QString::fromUtf8("scan"));
        scan->setGeometry(QRect(75, 70, 170, 170));

        retranslateUi(UpgradeDialog);

        QMetaObject::connectSlotsByName(UpgradeDialog);
    } // setupUi

    void retranslateUi(QDialog *UpgradeDialog)
    {
        UpgradeDialog->setWindowTitle(QCoreApplication::translate("UpgradeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpgradeDialog", "360\345\256\211\345\205\250\345\215\253\345\243\253-\345\215\207\347\272\247", nullptr));
        close->setText(QString());
        version->setText(QCoreApplication::translate("UpgradeDialog", "\345\275\223\345\211\215\347\211\210\346\234\254: 11(11.0.0.1.1001)", nullptr));
        pushButton->setText(QCoreApplication::translate("UpgradeDialog", "\345\217\226\346\266\210", nullptr));
        title->setText(QCoreApplication::translate("UpgradeDialog", "\350\216\267\345\217\226\346\226\260\347\211\210\346\234\254\344\270\255...", nullptr));
        subtitle->setText(QCoreApplication::translate("UpgradeDialog", "\346\202\250\350\277\230\345\217\257\345\211\215\345\276\200360\345\256\230\347\275\221\350\246\206\347\233\226\345\256\211\350\243\205\346\234\200\346\226\260\347\211\210\346\234\254,\344\272\253\345\217\227\346\234\200\344\274\230\344\275\223\351\252\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpgradeDialog: public Ui_UpgradeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPGRADEDIALOG_H
