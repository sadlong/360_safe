/********************************************************************************
** Form generated from reading UI file 'optimizewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIMIZEWIDGET_H
#define UI_OPTIMIZEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_OptimizeWidget
{
public:
    QWidget *background;
    QWidget *home;
    QLabel *subtitle;
    QPushButton *pushButton;
    WaveBallWidget *wallBallWidget;
    QLabel *title;
    QToolButton *tb4;
    QToolButton *tb5;
    QToolButton *tb6;
    QToolButton *tb1;
    QToolButton *tb2;
    QToolButton *tb3;

    void setupUi(QWidget *OptimizeWidget)
    {
        if (OptimizeWidget->objectName().isEmpty())
            OptimizeWidget->setObjectName(QString::fromUtf8("OptimizeWidget"));
        OptimizeWidget->resize(920, 460);
        background = new QWidget(OptimizeWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        home = new QWidget(OptimizeWidget);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(0, 0, 920, 460));
        subtitle = new QLabel(home);
        subtitle->setObjectName(QString::fromUtf8("subtitle"));
        subtitle->setGeometry(QRect(360, 150, 400, 20));
        pushButton = new QPushButton(home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 200, 200, 60));
        wallBallWidget = new WaveBallWidget(home);
        wallBallWidget->setObjectName(QString::fromUtf8("wallBallWidget"));
        wallBallWidget->setGeometry(QRect(110, 90, 190, 190));
        title = new QLabel(home);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(360, 110, 400, 40));
        tb4 = new QToolButton(home);
        tb4->setObjectName(QString::fromUtf8("tb4"));
        tb4->setGeometry(QRect(710, 390, 70, 70));
        tb5 = new QToolButton(home);
        tb5->setObjectName(QString::fromUtf8("tb5"));
        tb5->setGeometry(QRect(780, 390, 70, 70));
        tb6 = new QToolButton(home);
        tb6->setObjectName(QString::fromUtf8("tb6"));
        tb6->setGeometry(QRect(850, 390, 70, 70));
        tb1 = new QToolButton(home);
        tb1->setObjectName(QString::fromUtf8("tb1"));
        tb1->setGeometry(QRect(590, 200, 60, 60));
        tb2 = new QToolButton(home);
        tb2->setObjectName(QString::fromUtf8("tb2"));
        tb2->setGeometry(QRect(20, 390, 70, 70));
        tb3 = new QToolButton(home);
        tb3->setObjectName(QString::fromUtf8("tb3"));
        tb3->setGeometry(QRect(90, 390, 70, 70));

        retranslateUi(OptimizeWidget);

        QMetaObject::connectSlotsByName(OptimizeWidget);
    } // setupUi

    void retranslateUi(QWidget *OptimizeWidget)
    {
        OptimizeWidget->setWindowTitle(QCoreApplication::translate("OptimizeWidget", "Form", nullptr));
        subtitle->setText(QCoreApplication::translate("OptimizeWidget", "\345\220\214\346\227\266\344\274\230\345\214\226\347\275\221\347\273\234\351\205\215\347\275\256, \347\241\254\347\233\230\344\274\240\350\276\223\351\200\237\347\216\207, \345\205\250\351\235\242\346\217\220\345\215\207\347\224\265\350\204\221\346\200\247\350\203\275", nullptr));
        pushButton->setText(QCoreApplication::translate("OptimizeWidget", "\345\205\250\351\235\242\346\217\220\351\200\237", nullptr));
        title->setText(QCoreApplication::translate("OptimizeWidget", "\346\217\220\345\215\207\345\274\200\346\234\272,\350\277\220\350\241\214\346\225\260\347\213\254,\350\256\251\347\224\265\350\204\221\345\277\253\345\246\202\351\227\252\347\224\265", nullptr));
        tb4->setText(QCoreApplication::translate("OptimizeWidget", "...", nullptr));
        tb5->setText(QCoreApplication::translate("OptimizeWidget", "...", nullptr));
        tb6->setText(QCoreApplication::translate("OptimizeWidget", "...", nullptr));
        tb1->setText(QCoreApplication::translate("OptimizeWidget", "...", nullptr));
        tb2->setText(QCoreApplication::translate("OptimizeWidget", "...", nullptr));
        tb3->setText(QCoreApplication::translate("OptimizeWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptimizeWidget: public Ui_OptimizeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIMIZEWIDGET_H
