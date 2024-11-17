/********************************************************************************
** Form generated from reading UI file 'fixwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIXWIDGET_H
#define UI_FIXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_FixWidget
{
public:
    QWidget *home;
    QLabel *subtitle;
    QPushButton *pushButton;
    WaveBallWidget *wallBallWidget;
    QLabel *title;
    QToolButton *tb6;
    QToolButton *tb7;
    QToolButton *tb8;
    QToolButton *tb1;
    QToolButton *tb2;
    QToolButton *tb3;
    QToolButton *tb4;
    QToolButton *tb5;
    QWidget *background;

    void setupUi(QWidget *FixWidget)
    {
        if (FixWidget->objectName().isEmpty())
            FixWidget->setObjectName(QString::fromUtf8("FixWidget"));
        FixWidget->resize(920, 460);
        home = new QWidget(FixWidget);
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
        tb6 = new QToolButton(home);
        tb6->setObjectName(QString::fromUtf8("tb6"));
        tb6->setGeometry(QRect(710, 390, 70, 70));
        tb7 = new QToolButton(home);
        tb7->setObjectName(QString::fromUtf8("tb7"));
        tb7->setGeometry(QRect(780, 390, 70, 70));
        tb8 = new QToolButton(home);
        tb8->setObjectName(QString::fromUtf8("tb8"));
        tb8->setGeometry(QRect(850, 390, 70, 70));
        tb1 = new QToolButton(home);
        tb1->setObjectName(QString::fromUtf8("tb1"));
        tb1->setGeometry(QRect(590, 200, 60, 60));
        tb2 = new QToolButton(home);
        tb2->setObjectName(QString::fromUtf8("tb2"));
        tb2->setGeometry(QRect(20, 390, 70, 70));
        tb3 = new QToolButton(home);
        tb3->setObjectName(QString::fromUtf8("tb3"));
        tb3->setGeometry(QRect(90, 390, 70, 70));
        tb4 = new QToolButton(home);
        tb4->setObjectName(QString::fromUtf8("tb4"));
        tb4->setGeometry(QRect(160, 390, 70, 70));
        tb5 = new QToolButton(home);
        tb5->setObjectName(QString::fromUtf8("tb5"));
        tb5->setGeometry(QRect(230, 390, 70, 70));
        background = new QWidget(FixWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        background->raise();
        home->raise();

        retranslateUi(FixWidget);

        QMetaObject::connectSlotsByName(FixWidget);
    } // setupUi

    void retranslateUi(QWidget *FixWidget)
    {
        FixWidget->setWindowTitle(QCoreApplication::translate("FixWidget", "Form", nullptr));
        subtitle->setText(QCoreApplication::translate("FixWidget", "\344\277\256\345\244\215\347\224\265\350\204\221\345\274\202\345\270\270,\345\217\212\346\227\266\346\233\264\346\226\260\350\241\245\344\270\201\345\222\214\351\251\261\345\212\250,\347\241\256\344\277\235\347\224\265\350\204\221\345\256\211\345\205\250", nullptr));
        pushButton->setText(QCoreApplication::translate("FixWidget", "\345\205\250\351\235\242\344\277\256\345\244\215", nullptr));
        title->setText(QCoreApplication::translate("FixWidget", "\350\241\245\346\274\217\346\264\236,\350\243\205\351\251\261\345\212\250,\344\277\256\345\244\215\345\274\202\345\270\270\347\263\273\347\273\237", nullptr));
        tb6->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb7->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb8->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb1->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb2->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb3->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb4->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
        tb5->setText(QCoreApplication::translate("FixWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FixWidget: public Ui_FixWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIXWIDGET_H
