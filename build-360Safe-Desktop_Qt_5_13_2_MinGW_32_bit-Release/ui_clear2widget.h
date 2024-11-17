/********************************************************************************
** Form generated from reading UI file 'clear2widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEAR2WIDGET_H
#define UI_CLEAR2WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <customviews/progressbarwidget.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Clear2Widget
{
public:
    QWidget *background;
    QWidget *main;
    QWidget *top;
    WaveBallWidget *waveBall;
    ProgressBarWidget *progreBar;
    QLabel *title;
    QLabel *subtitle;
    QPushButton *pushButton;
    QWidget *bottom;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;

    void setupUi(QWidget *Clear2Widget)
    {
        if (Clear2Widget->objectName().isEmpty())
            Clear2Widget->setObjectName(QString::fromUtf8("Clear2Widget"));
        Clear2Widget->resize(920, 460);
        background = new QWidget(Clear2Widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        main = new QWidget(Clear2Widget);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(0, 0, 920, 460));
        top = new QWidget(main);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(0, 0, 920, 130));
        waveBall = new WaveBallWidget(top);
        waveBall->setObjectName(QString::fromUtf8("waveBall"));
        waveBall->setGeometry(QRect(40, 20, 90, 90));
        progreBar = new ProgressBarWidget(top);
        progreBar->setObjectName(QString::fromUtf8("progreBar"));
        progreBar->setGeometry(QRect(0, 126, 920, 4));
        title = new QLabel(top);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(160, 40, 401, 30));
        subtitle = new QLabel(top);
        subtitle->setObjectName(QString::fromUtf8("subtitle"));
        subtitle->setGeometry(QRect(160, 80, 381, 16));
        pushButton = new QPushButton(top);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(780, 50, 90, 36));
        bottom = new QWidget(main);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setGeometry(QRect(0, 130, 920, 331));
        widget = new QWidget(bottom);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 920, 50));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(70, 10, 30, 30));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 271, 16));

        retranslateUi(Clear2Widget);

        QMetaObject::connectSlotsByName(Clear2Widget);
    } // setupUi

    void retranslateUi(QWidget *Clear2Widget)
    {
        Clear2Widget->setWindowTitle(QCoreApplication::translate("Clear2Widget", "Form", nullptr));
        title->setText(QCoreApplication::translate("Clear2Widget", "\346\255\243\345\234\250\346\211\253\346\217\217", nullptr));
        subtitle->setText(QCoreApplication::translate("Clear2Widget", "\346\255\243\345\234\250\346\211\253\346\217\217: \345\270\270\347\224\250\350\275\257\344\273\266\346\211\253\346\217\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Clear2Widget", "\345\217\226\346\266\210\346\211\253\346\217\217", nullptr));
        label->setText(QCoreApplication::translate("Clear2Widget", "\345\270\270\347\224\250\350\275\257\344\273\266\345\236\203\345\234\276   \345\205\2610\351\241\271 0KB, \345\267\262\351\200\211\344\270\2550KB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clear2Widget: public Ui_Clear2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEAR2WIDGET_H
