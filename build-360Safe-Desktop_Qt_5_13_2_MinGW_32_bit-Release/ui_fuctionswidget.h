/********************************************************************************
** Form generated from reading UI file 'fuctionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUCTIONSWIDGET_H
#define UI_FUCTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FuctionsWidget
{
public:
    QWidget *main;
    QListWidget *listWidget;
    QWidget *right;
    QWidget *scrollview;
    QWidget *widget;
    QLabel *redian;
    QLabel *question1;
    QWidget *line;
    QWidget *line_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *search;
    QLineEdit *lineEdit;
    QPushButton *searchIcon;
    QWidget *listWidgetBackGround;
    QWidget *background;

    void setupUi(QWidget *FuctionsWidget)
    {
        if (FuctionsWidget->objectName().isEmpty())
            FuctionsWidget->setObjectName(QString::fromUtf8("FuctionsWidget"));
        FuctionsWidget->resize(920, 460);
        main = new QWidget(FuctionsWidget);
        main->setObjectName(QString::fromUtf8("main"));
        main->setGeometry(QRect(0, 0, 920, 460));
        listWidget = new QListWidget(main);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 150, 460));
        right = new QWidget(main);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(150, 0, 771, 461));
        scrollview = new QWidget(right);
        scrollview->setObjectName(QString::fromUtf8("scrollview"));
        scrollview->setGeometry(QRect(0, 60, 771, 401));
        widget = new QWidget(right);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 771, 61));
        redian = new QLabel(widget);
        redian->setObjectName(QString::fromUtf8("redian"));
        redian->setGeometry(QRect(30, 20, 31, 16));
        question1 = new QLabel(widget);
        question1->setObjectName(QString::fromUtf8("question1"));
        question1->setGeometry(QRect(70, 20, 101, 16));
        line = new QWidget(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 15, 1, 30));
        line_2 = new QWidget(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(320, 15, 1, 30));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 111, 16));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 20, 121, 16));
        search = new QWidget(widget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(500, 10, 251, 31));
        lineEdit = new QLineEdit(search);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 5, 211, 21));
        searchIcon = new QPushButton(search);
        searchIcon->setObjectName(QString::fromUtf8("searchIcon"));
        searchIcon->setGeometry(QRect(5, 5, 20, 20));
        listWidgetBackGround = new QWidget(main);
        listWidgetBackGround->setObjectName(QString::fromUtf8("listWidgetBackGround"));
        listWidgetBackGround->setGeometry(QRect(0, 0, 150, 460));
        listWidgetBackGround->raise();
        listWidget->raise();
        right->raise();
        background = new QWidget(FuctionsWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        background->raise();
        main->raise();

        retranslateUi(FuctionsWidget);

        QMetaObject::connectSlotsByName(FuctionsWidget);
    } // setupUi

    void retranslateUi(QWidget *FuctionsWidget)
    {
        FuctionsWidget->setWindowTitle(QCoreApplication::translate("FuctionsWidget", "Form", nullptr));
        redian->setText(QCoreApplication::translate("FuctionsWidget", "\347\203\255\347\202\271", nullptr));
        question1->setText(QCoreApplication::translate("FuctionsWidget", "\346\230\276\345\215\241,\345\243\260\345\215\241\345\207\272\346\225\205\351\232\234?", nullptr));
        label->setText(QCoreApplication::translate("FuctionsWidget", "\346\265\217\350\247\210\345\231\250\344\270\273\351\241\265\350\242\253\345\212\253\346\214\201?", nullptr));
        label_2->setText(QCoreApplication::translate("FuctionsWidget", "\344\270\212\344\270\215\344\272\206\347\275\221,\346\200\216\344\271\210\345\212\236?", nullptr));
        searchIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FuctionsWidget: public Ui_FuctionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUCTIONSWIDGET_H
