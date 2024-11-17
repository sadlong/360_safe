/********************************************************************************
** Form generated from reading UI file 'horsewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORSEWIDGET_H
#define UI_HORSEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <customviews/focuswidget.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_HorseWidget
{
public:
    QWidget *background;
    QWidget *main;
    QCheckBox *checkBox;
    QLabel *subtitle;
    QToolButton *tbXinrenqu;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QToolButton *tbAnweizhi;
    QToolButton *tbHuifuqu;
    QToolButton *tbShouji;
    FocusWidget *pushButton_2;
    WaveBallWidget *wallBallWidget;
    QPushButton *pushButton_6;
    QToolButton *tbWinPE;
    QLabel *title;
    QPushButton *pushButton_3;
    QToolButton *tbQuanpan;
    QToolButton *tbXitong;
    QToolButton *tbShangbanqu;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HorseWidget)
    {
        if (HorseWidget->objectName().isEmpty())
            HorseWidget->setObjectName(QString::fromUtf8("HorseWidget"));
        HorseWidget->resize(920, 460);
        background = new QWidget(HorseWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        main = new QWidget(HorseWidget);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(0, 0, 920, 460));
        checkBox = new QCheckBox(main);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(710, 350, 201, 20));
        subtitle = new QLabel(main);
        subtitle->setObjectName(QString::fromUtf8("subtitle"));
        subtitle->setGeometry(QRect(360, 150, 400, 20));
        tbXinrenqu = new QToolButton(main);
        tbXinrenqu->setObjectName(QString::fromUtf8("tbXinrenqu"));
        tbXinrenqu->setGeometry(QRect(40, 400, 40, 60));
        pushButton_5 = new QPushButton(main);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 360, 25, 25));
        pushButton = new QPushButton(main);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 200, 200, 60));
        tbAnweizhi = new QToolButton(main);
        tbAnweizhi->setObjectName(QString::fromUtf8("tbAnweizhi"));
        tbAnweizhi->setGeometry(QRect(660, 200, 60, 60));
        tbHuifuqu = new QToolButton(main);
        tbHuifuqu->setObjectName(QString::fromUtf8("tbHuifuqu"));
        tbHuifuqu->setGeometry(QRect(110, 400, 40, 60));
        tbShouji = new QToolButton(main);
        tbShouji->setObjectName(QString::fromUtf8("tbShouji"));
        tbShouji->setGeometry(QRect(780, 390, 60, 70));
        pushButton_2 = new FocusWidget(main);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 360, 25, 25));
        wallBallWidget = new WaveBallWidget(main);
        wallBallWidget->setObjectName(QString::fromUtf8("wallBallWidget"));
        wallBallWidget->setGeometry(QRect(120, 90, 190, 190));
        pushButton_6 = new QPushButton(main);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 360, 25, 25));
        tbWinPE = new QToolButton(main);
        tbWinPE->setObjectName(QString::fromUtf8("tbWinPE"));
        tbWinPE->setGeometry(QRect(850, 390, 60, 70));
        title = new QLabel(main);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(360, 110, 400, 40));
        pushButton_3 = new QPushButton(main);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 360, 25, 25));
        tbQuanpan = new QToolButton(main);
        tbQuanpan->setObjectName(QString::fromUtf8("tbQuanpan"));
        tbQuanpan->setGeometry(QRect(590, 200, 60, 60));
        tbXitong = new QToolButton(main);
        tbXitong->setObjectName(QString::fromUtf8("tbXitong"));
        tbXitong->setGeometry(QRect(710, 390, 60, 70));
        tbShangbanqu = new QToolButton(main);
        tbShangbanqu->setObjectName(QString::fromUtf8("tbShangbanqu"));
        tbShangbanqu->setGeometry(QRect(180, 400, 40, 60));
        pushButton_4 = new QPushButton(main);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 360, 25, 25));

        retranslateUi(HorseWidget);

        QMetaObject::connectSlotsByName(HorseWidget);
    } // setupUi

    void retranslateUi(QWidget *HorseWidget)
    {
        HorseWidget->setWindowTitle(QCoreApplication::translate("HorseWidget", "Form", nullptr));
        checkBox->setText(QCoreApplication::translate("HorseWidget", "\345\274\200\345\220\257\345\274\272\345\214\226\346\250\241\345\274\217,\344\273\205\351\231\220\346\234\254\346\254\241\346\211\253\346\217\217", nullptr));
        subtitle->setText(QCoreApplication::translate("HorseWidget", "\351\241\266\350\265\267\346\234\250\351\251\254\346\237\245\346\235\200, \346\227\266\345\210\273\344\277\235\346\214\201\347\224\265\350\204\221\345\201\245\345\272\267", nullptr));
        tbXinrenqu->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        pushButton_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("HorseWidget", "\345\277\253\351\200\237\346\237\245\346\235\200", nullptr));
        tbAnweizhi->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        tbHuifuqu->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        tbShouji->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        tbWinPE->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        title->setText(QCoreApplication::translate("HorseWidget", "\344\270\212\346\254\241\346\211\253\346\217\217\345\205\26110\351\241\271\345\250\201\350\203\201\346\234\252\345\244\204\347\220\206", nullptr));
        pushButton_3->setText(QString());
        tbQuanpan->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        tbXitong->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        tbShangbanqu->setText(QCoreApplication::translate("HorseWidget", "...", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HorseWidget: public Ui_HorseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORSEWIDGET_H
