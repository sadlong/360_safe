/********************************************************************************
** Form generated from reading UI file 'market360dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKET360DIALOG_H
#define UI_MARKET360DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Market360Dialog
{
public:
    QWidget *background;
    QWidget *main;
    QWidget *icon;
    QLabel *title;
    QPushButton *close;
    QPushButton *min;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QWidget *bottom;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *Market360Dialog)
    {
        if (Market360Dialog->objectName().isEmpty())
            Market360Dialog->setObjectName(QString::fromUtf8("Market360Dialog"));
        Market360Dialog->resize(920, 620);
        background = new QWidget(Market360Dialog);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 620));
        main = new QWidget(Market360Dialog);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(0, 0, 920, 620));
        icon = new QWidget(main);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(10, 10, 20, 20));
        title = new QLabel(main);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(40, 10, 59, 16));
        close = new QPushButton(main);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(890, 10, 20, 20));
        min = new QPushButton(main);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(860, 10, 20, 20));
        toolButton = new QToolButton(main);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(270, 10, 60, 70));
        toolButton_2 = new QToolButton(main);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(350, 10, 60, 70));
        toolButton_3 = new QToolButton(main);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(430, 10, 60, 70));
        toolButton_4 = new QToolButton(main);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(510, 10, 60, 70));
        toolButton_5 = new QToolButton(main);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setGeometry(QRect(590, 10, 60, 70));
        bottom = new QWidget(main);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setGeometry(QRect(0, 80, 921, 541));
        verticalLayoutWidget = new QWidget(bottom);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 921, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Market360Dialog);

        QMetaObject::connectSlotsByName(Market360Dialog);
    } // setupUi

    void retranslateUi(QDialog *Market360Dialog)
    {
        Market360Dialog->setWindowTitle(QCoreApplication::translate("Market360Dialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("Market360Dialog", "360\345\225\206\345\237\216", nullptr));
        close->setText(QString());
        min->setText(QString());
        toolButton->setText(QCoreApplication::translate("Market360Dialog", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Market360Dialog", "...", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Market360Dialog", "...", nullptr));
        toolButton_4->setText(QCoreApplication::translate("Market360Dialog", "...", nullptr));
        toolButton_5->setText(QCoreApplication::translate("Market360Dialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Market360Dialog: public Ui_Market360Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKET360DIALOG_H
