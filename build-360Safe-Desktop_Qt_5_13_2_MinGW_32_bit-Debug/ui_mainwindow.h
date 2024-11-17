/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <customviews/hoverpushbutton.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *mainWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QWidget *titleWidget;
    QPushButton *close;
    QPushButton *min;
    QPushButton *menu;
    QPushButton *theme;
    QWidget *icon;
    QLabel *title;
    QToolButton *tbHome;
    QToolButton *tbHorse;
    QToolButton *tbClear;
    QToolButton *tbFix;
    QToolButton *tbYouhua;
    QToolButton *tbActions;
    QToolButton *tbMarket;
    QToolButton *tbApp;
    HoverPushButton *pbIcon;
    HoverPushButton *pb360;
    HoverPushButton *pbLogion;
    QWidget *backgroundWidget;
    QWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(920, 580);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainWidget = new QWidget(centralWidget);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setGeometry(QRect(0, 120, 920, 460));
        verticalLayoutWidget = new QWidget(mainWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 921, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topWidget = new QWidget(centralWidget);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        topWidget->setGeometry(QRect(0, 0, 920, 120));
        titleWidget = new QWidget(topWidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setGeometry(QRect(0, 0, 920, 30));
        close = new QPushButton(titleWidget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(890, 10, 20, 20));
        min = new QPushButton(titleWidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(860, 10, 20, 20));
        menu = new QPushButton(titleWidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(830, 10, 20, 20));
        theme = new QPushButton(titleWidget);
        theme->setObjectName(QString::fromUtf8("theme"));
        theme->setGeometry(QRect(800, 10, 20, 20));
        icon = new QWidget(titleWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(10, 5, 20, 20));
        title = new QLabel(titleWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(40, 10, 101, 16));
        tbHome = new QToolButton(topWidget);
        tbHome->setObjectName(QString::fromUtf8("tbHome"));
        tbHome->setGeometry(QRect(20, 30, 90, 90));
        tbHorse = new QToolButton(topWidget);
        tbHorse->setObjectName(QString::fromUtf8("tbHorse"));
        tbHorse->setGeometry(QRect(110, 30, 90, 90));
        tbClear = new QToolButton(topWidget);
        tbClear->setObjectName(QString::fromUtf8("tbClear"));
        tbClear->setGeometry(QRect(200, 30, 90, 90));
        tbFix = new QToolButton(topWidget);
        tbFix->setObjectName(QString::fromUtf8("tbFix"));
        tbFix->setGeometry(QRect(290, 30, 90, 90));
        tbYouhua = new QToolButton(topWidget);
        tbYouhua->setObjectName(QString::fromUtf8("tbYouhua"));
        tbYouhua->setGeometry(QRect(380, 30, 90, 90));
        tbActions = new QToolButton(topWidget);
        tbActions->setObjectName(QString::fromUtf8("tbActions"));
        tbActions->setGeometry(QRect(470, 30, 90, 90));
        tbMarket = new QToolButton(topWidget);
        tbMarket->setObjectName(QString::fromUtf8("tbMarket"));
        tbMarket->setGeometry(QRect(560, 30, 90, 90));
        tbApp = new QToolButton(topWidget);
        tbApp->setObjectName(QString::fromUtf8("tbApp"));
        tbApp->setGeometry(QRect(650, 30, 90, 90));
        pbIcon = new HoverPushButton(topWidget);
        pbIcon->setObjectName(QString::fromUtf8("pbIcon"));
        pbIcon->setGeometry(QRect(850, 50, 60, 61));
        pb360 = new HoverPushButton(topWidget);
        pb360->setObjectName(QString::fromUtf8("pb360"));
        pb360->setGeometry(QRect(760, 50, 90, 35));
        pbLogion = new HoverPushButton(topWidget);
        pbLogion->setObjectName(QString::fromUtf8("pbLogion"));
        pbLogion->setGeometry(QRect(770, 80, 81, 32));
        backgroundWidget = new QWidget(centralWidget);
        backgroundWidget->setObjectName(QString::fromUtf8("backgroundWidget"));
        backgroundWidget->setGeometry(QRect(0, 0, 920, 581));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 120, 920, 460));
        MainWindow->setCentralWidget(centralWidget);
        backgroundWidget->raise();
        widget->raise();
        mainWidget->raise();
        topWidget->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        close->setText(QString());
        min->setText(QString());
        menu->setText(QString());
        theme->setText(QString());
        title->setText(QCoreApplication::translate("MainWindow", "360\345\256\211\345\205\250\345\215\253\345\243\25311", nullptr));
        tbHome->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbHorse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbClear->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbFix->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbYouhua->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbActions->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbMarket->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbApp->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pbIcon->setText(QString());
        pb360->setText(QCoreApplication::translate("MainWindow", "sadliu\345\210\266", nullptr));
        pbLogion->setText(QCoreApplication::translate("MainWindow", "\347\231\273\351\231\206360\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
