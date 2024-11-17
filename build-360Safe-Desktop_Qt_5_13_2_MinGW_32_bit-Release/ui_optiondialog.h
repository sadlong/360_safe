/********************************************************************************
** Form generated from reading UI file 'optiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONDIALOG_H
#define UI_OPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionDialog
{
public:
    QWidget *background;
    QWidget *main;
    QTreeWidget *treeWidget;
    QWidget *right;
    QGroupBox *groupBox;
    QWidget *bottom;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *title;
    QPushButton *close;

    void setupUi(QDialog *OptionDialog)
    {
        if (OptionDialog->objectName().isEmpty())
            OptionDialog->setObjectName(QString::fromUtf8("OptionDialog"));
        OptionDialog->resize(780, 500);
        background = new QWidget(OptionDialog);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 780, 500));
        main = new QWidget(background);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(0, 30, 780, 430));
        treeWidget = new QTreeWidget(main);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 191, 429));
        right = new QWidget(main);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(190, 0, 591, 429));
        groupBox = new QGroupBox(right);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 571, 421));
        bottom = new QWidget(background);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setGeometry(QRect(0, 460, 781, 40));
        pushButton = new QPushButton(bottom);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 5, 60, 30));
        pushButton_2 = new QPushButton(bottom);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 5, 121, 32));
        title = new QLabel(background);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(20, 10, 141, 16));
        close = new QPushButton(background);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(750, 5, 20, 20));

        retranslateUi(OptionDialog);

        QMetaObject::connectSlotsByName(OptionDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionDialog)
    {
        OptionDialog->setWindowTitle(QCoreApplication::translate("OptionDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionDialog", "\345\212\237\350\203\275\345\256\232\345\210\266", nullptr));
        pushButton->setText(QCoreApplication::translate("OptionDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OptionDialog", "\346\201\242\345\244\215\346\211\200\346\234\211\351\273\230\350\256\244\345\200\274", nullptr));
        title->setText(QCoreApplication::translate("OptionDialog", "360\350\256\276\347\275\256\344\270\255\345\277\203", nullptr));
        close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionDialog: public Ui_OptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONDIALOG_H
