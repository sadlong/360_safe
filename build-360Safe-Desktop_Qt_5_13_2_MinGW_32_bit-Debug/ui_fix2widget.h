/********************************************************************************
** Form generated from reading UI file 'fix2widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIX2WIDGET_H
#define UI_FIX2WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <customviews/progressbarwidget.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Fix2Widget
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
    QListWidget *listWidget;

    void setupUi(QWidget *Fix2Widget)
    {
        if (Fix2Widget->objectName().isEmpty())
            Fix2Widget->setObjectName(QString::fromUtf8("Fix2Widget"));
        Fix2Widget->resize(920, 460);
        background = new QWidget(Fix2Widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        main = new QWidget(Fix2Widget);
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
        listWidget = new QListWidget(bottom);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 921, 331));

        retranslateUi(Fix2Widget);

        QMetaObject::connectSlotsByName(Fix2Widget);
    } // setupUi

    void retranslateUi(QWidget *Fix2Widget)
    {
        Fix2Widget->setWindowTitle(QCoreApplication::translate("Fix2Widget", "Form", nullptr));
        title->setText(QCoreApplication::translate("Fix2Widget", "\346\211\253\346\217\217\344\270\255", nullptr));
        subtitle->setText(QCoreApplication::translate("Fix2Widget", "\345\205\250\351\235\242\345\215\207\347\272\247\347\224\265\350\204\221\345\274\200\346\234\272\351\200\237\345\272\246,\347\263\273\347\273\237\351\200\237\345\272\246,\344\270\212\347\275\221\351\200\237\345\272\246,\347\241\254\347\233\230\351\200\237\345\272\246", nullptr));
        pushButton->setText(QCoreApplication::translate("Fix2Widget", "\345\217\226\346\266\210\346\211\253\346\217\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fix2Widget: public Ui_Fix2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIX2WIDGET_H