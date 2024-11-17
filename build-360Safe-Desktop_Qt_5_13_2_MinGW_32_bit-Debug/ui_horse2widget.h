/********************************************************************************
** Form generated from reading UI file 'horse2widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORSE2WIDGET_H
#define UI_HORSE2WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <customviews/progressbarwidget.h>
#include <customviews/scanwidget.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Horse2Widget
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
    QLabel *timer;
    QWidget *bottom;
    QWidget *widget;
    QLabel *label_2;
    QCheckBox *checkBox;
    ScanWidget *scan_1;
    ScanWidget *scan_2;
    ScanWidget *scan_3;
    ScanWidget *scan_4;
    ScanWidget *scan_5;
    ScanWidget *scan_6;
    ScanWidget *scan_7;
    ScanWidget *scan_8;
    ScanWidget *scan_9;
    ScanWidget *scan_10;

    void setupUi(QWidget *Horse2Widget)
    {
        if (Horse2Widget->objectName().isEmpty())
            Horse2Widget->setObjectName(QString::fromUtf8("Horse2Widget"));
        Horse2Widget->resize(920, 460);
        background = new QWidget(Horse2Widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        main = new QWidget(Horse2Widget);
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
        timer = new QLabel(top);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setGeometry(QRect(670, 60, 111, 16));
        bottom = new QWidget(main);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setGeometry(QRect(0, 130, 920, 331));
        widget = new QWidget(bottom);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 920, 30));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 5, 381, 16));
        checkBox = new QCheckBox(bottom);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(670, 300, 241, 20));
        scan_1 = new ScanWidget(bottom);
        scan_1->setObjectName(QString::fromUtf8("scan_1"));
        scan_1->setGeometry(QRect(100, 30, 120, 130));
        scan_2 = new ScanWidget(bottom);
        scan_2->setObjectName(QString::fromUtf8("scan_2"));
        scan_2->setGeometry(QRect(220, 30, 120, 130));
        scan_3 = new ScanWidget(bottom);
        scan_3->setObjectName(QString::fromUtf8("scan_3"));
        scan_3->setGeometry(QRect(340, 30, 120, 130));
        scan_4 = new ScanWidget(bottom);
        scan_4->setObjectName(QString::fromUtf8("scan_4"));
        scan_4->setGeometry(QRect(460, 30, 120, 130));
        scan_5 = new ScanWidget(bottom);
        scan_5->setObjectName(QString::fromUtf8("scan_5"));
        scan_5->setGeometry(QRect(580, 30, 120, 130));
        scan_6 = new ScanWidget(bottom);
        scan_6->setObjectName(QString::fromUtf8("scan_6"));
        scan_6->setGeometry(QRect(700, 30, 120, 130));
        scan_7 = new ScanWidget(bottom);
        scan_7->setObjectName(QString::fromUtf8("scan_7"));
        scan_7->setGeometry(QRect(100, 160, 120, 130));
        scan_8 = new ScanWidget(bottom);
        scan_8->setObjectName(QString::fromUtf8("scan_8"));
        scan_8->setGeometry(QRect(220, 160, 120, 130));
        scan_9 = new ScanWidget(bottom);
        scan_9->setObjectName(QString::fromUtf8("scan_9"));
        scan_9->setGeometry(QRect(340, 160, 120, 130));
        scan_10 = new ScanWidget(bottom);
        scan_10->setObjectName(QString::fromUtf8("scan_10"));
        scan_10->setGeometry(QRect(460, 160, 120, 130));

        retranslateUi(Horse2Widget);

        QMetaObject::connectSlotsByName(Horse2Widget);
    } // setupUi

    void retranslateUi(QWidget *Horse2Widget)
    {
        Horse2Widget->setWindowTitle(QCoreApplication::translate("Horse2Widget", "Form", nullptr));
        title->setText(QCoreApplication::translate("Horse2Widget", "\346\255\243\345\234\250\346\211\253\346\217\217: \347\263\273\347\273\237\345\220\257\345\212\250\351\241\271", nullptr));
        subtitle->setText(QString());
        pushButton->setText(QCoreApplication::translate("Horse2Widget", "\346\232\202\345\201\234\346\211\253\346\217\217", nullptr));
        timer->setText(QCoreApplication::translate("Horse2Widget", "\345\267\262\347\224\250\346\227\266: 00:00:01", nullptr));
        label_2->setText(QCoreApplication::translate("Horse2Widget", "\346\255\243\345\234\250\350\277\233\350\241\214\346\234\250\351\251\254\346\211\253\346\217\217-\345\205\26110\351\241\271 (\346\211\253\346\217\217\347\263\273\347\273\237\346\230\257\345\220\246\345\255\230\345\234\250\347\227\205\346\257\222\346\234\250\351\251\254)", nullptr));
        checkBox->setText(QCoreApplication::translate("Horse2Widget", "\346\211\253\346\217\217\345\256\214\346\210\220\345\220\216\350\207\252\345\212\250\345\205\263\346\234\272(\350\207\252\345\212\250\346\270\205\347\220\206\346\234\250\351\251\254)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Horse2Widget: public Ui_Horse2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORSE2WIDGET_H
