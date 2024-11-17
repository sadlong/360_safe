/********************************************************************************
** Form generated from reading UI file 'clearwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEARWIDGET_H
#define UI_CLEARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <customviews/hovertoolbutton.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_ClearWidget
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
    HoverToolButton *tb1;
    QToolButton *tb2;
    QToolButton *tb3;
    QToolButton *tb4;
    QToolButton *tb5;
    QWidget *background;

    void setupUi(QWidget *ClearWidget)
    {
        if (ClearWidget->objectName().isEmpty())
            ClearWidget->setObjectName(QString::fromUtf8("ClearWidget"));
        ClearWidget->resize(920, 460);
        home = new QWidget(ClearWidget);
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
        tb1 = new HoverToolButton(home);
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
        background = new QWidget(ClearWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        background->raise();
        home->raise();

        retranslateUi(ClearWidget);

        QMetaObject::connectSlotsByName(ClearWidget);
    } // setupUi

    void retranslateUi(QWidget *ClearWidget)
    {
        ClearWidget->setWindowTitle(QCoreApplication::translate("ClearWidget", "Form", nullptr));
        subtitle->setText(QCoreApplication::translate("ClearWidget", "\345\205\273\346\210\220\350\211\257\345\245\275\347\232\204\346\270\205\347\220\206\344\271\240\346\203\257,\350\256\251\347\224\265\350\204\221\344\277\235\346\214\201\346\234\200\350\275\273\346\235\276\347\232\204\347\212\266\346\200\201", nullptr));
        pushButton->setText(QCoreApplication::translate("ClearWidget", "\345\205\250\351\235\242\346\270\205\347\220\206", nullptr));
        title->setText(QCoreApplication::translate("ClearWidget", "\346\270\205\347\220\206\345\236\203\345\234\276.\346\217\222\344\273\266,\347\227\225\350\277\271,\351\207\212\346\224\276\346\233\264\345\244\232\347\251\272\351\227\264", nullptr));
        tb6->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb7->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb8->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb1->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb2->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb3->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb4->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
        tb5->setText(QCoreApplication::translate("ClearWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClearWidget: public Ui_ClearWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEARWIDGET_H
