/********************************************************************************
** Form generated from reading UI file 'homewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWIDGET_H
#define UI_HOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <customviews/statewidget.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_HomeWidget
{
public:
    QWidget *home;
    QLabel *subtitle;
    QPushButton *pushButton;
    QToolButton *tbApp;
    QToolButton *tbService;
    WaveBallWidget *wallBallWidget;
    QLabel *title;
    QToolButton *tbHandler;
    QToolButton *tbFix;
    QToolButton *tbMore;
    StateWidget *fangHuZhongXin;
    StateWidget *wangGouXianPei;
    StateWidget *fanLeSuo;
    QWidget *background;

    void setupUi(QWidget *HomeWidget)
    {
        if (HomeWidget->objectName().isEmpty())
            HomeWidget->setObjectName(QString::fromUtf8("HomeWidget"));
        HomeWidget->resize(920, 460);
        home = new QWidget(HomeWidget);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(0, 0, 920, 460));
        subtitle = new QLabel(home);
        subtitle->setObjectName(QString::fromUtf8("subtitle"));
        subtitle->setGeometry(QRect(360, 150, 400, 20));
        pushButton = new QPushButton(home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 200, 200, 60));
        tbApp = new QToolButton(home);
        tbApp->setObjectName(QString::fromUtf8("tbApp"));
        tbApp->setGeometry(QRect(550, 390, 70, 70));
        tbService = new QToolButton(home);
        tbService->setObjectName(QString::fromUtf8("tbService"));
        tbService->setGeometry(QRect(620, 390, 70, 70));
        wallBallWidget = new WaveBallWidget(home);
        wallBallWidget->setObjectName(QString::fromUtf8("wallBallWidget"));
        wallBallWidget->setGeometry(QRect(110, 90, 190, 190));
        title = new QLabel(home);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(360, 110, 400, 40));
        tbHandler = new QToolButton(home);
        tbHandler->setObjectName(QString::fromUtf8("tbHandler"));
        tbHandler->setGeometry(QRect(690, 390, 70, 70));
        tbFix = new QToolButton(home);
        tbFix->setObjectName(QString::fromUtf8("tbFix"));
        tbFix->setGeometry(QRect(760, 390, 70, 70));
        tbMore = new QToolButton(home);
        tbMore->setObjectName(QString::fromUtf8("tbMore"));
        tbMore->setGeometry(QRect(830, 390, 70, 70));
        fangHuZhongXin = new StateWidget(home);
        fangHuZhongXin->setObjectName(QString::fromUtf8("fangHuZhongXin"));
        fangHuZhongXin->setGeometry(QRect(20, 390, 70, 70));
        wangGouXianPei = new StateWidget(home);
        wangGouXianPei->setObjectName(QString::fromUtf8("wangGouXianPei"));
        wangGouXianPei->setGeometry(QRect(90, 390, 70, 70));
        fanLeSuo = new StateWidget(home);
        fanLeSuo->setObjectName(QString::fromUtf8("fanLeSuo"));
        fanLeSuo->setGeometry(QRect(160, 390, 70, 70));
        background = new QWidget(HomeWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        background->raise();
        home->raise();

        retranslateUi(HomeWidget);

        QMetaObject::connectSlotsByName(HomeWidget);
    } // setupUi

    void retranslateUi(QWidget *HomeWidget)
    {
        HomeWidget->setWindowTitle(QCoreApplication::translate("HomeWidget", "Form", nullptr));
        subtitle->setText(QCoreApplication::translate("HomeWidget", "\347\263\273\347\273\237\345\217\257\350\203\275\345\267\262\347\273\217\345\255\230\345\234\250\351\253\230\345\215\261\351\243\216\351\231\251", nullptr));
        pushButton->setText(QCoreApplication::translate("HomeWidget", "\347\253\213\345\215\263\344\275\223\346\243\200", nullptr));
        tbApp->setText(QCoreApplication::translate("HomeWidget", "...", nullptr));
        tbService->setText(QCoreApplication::translate("HomeWidget", "...", nullptr));
        title->setText(QCoreApplication::translate("HomeWidget", "\345\267\2623\345\244\251\346\262\241\346\234\211\344\275\223\346\243\200,\345\273\272\350\256\256\347\253\213\345\215\263\344\275\223\346\243\200!", nullptr));
        tbHandler->setText(QCoreApplication::translate("HomeWidget", "...", nullptr));
        tbFix->setText(QCoreApplication::translate("HomeWidget", "...", nullptr));
        tbMore->setText(QCoreApplication::translate("HomeWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeWidget: public Ui_HomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWIDGET_H
