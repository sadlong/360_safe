/********************************************************************************
** Form generated from reading UI file 'home2widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME2WIDGET_H
#define UI_HOME2WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include <customviews/progressbarwidget.h>
#include <customviews/waveballwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Home2Widget
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
    QTreeWidget *treeWidget;

    void setupUi(QWidget *Home2Widget)
    {
        if (Home2Widget->objectName().isEmpty())
            Home2Widget->setObjectName(QString::fromUtf8("Home2Widget"));
        Home2Widget->resize(920, 460);
        background = new QWidget(Home2Widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 920, 460));
        main = new QWidget(Home2Widget);
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
        treeWidget = new QTreeWidget(bottom);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 921, 331));

        retranslateUi(Home2Widget);

        QMetaObject::connectSlotsByName(Home2Widget);
    } // setupUi

    void retranslateUi(QWidget *Home2Widget)
    {
        Home2Widget->setWindowTitle(QCoreApplication::translate("Home2Widget", "Form", nullptr));
        title->setText(QCoreApplication::translate("Home2Widget", "\346\255\243\345\234\250\350\277\233\350\241\214\344\275\223\346\243\200: \346\225\205\351\232\234\346\243\200\346\265\213", nullptr));
        subtitle->setText(QCoreApplication::translate("Home2Widget", "\345\260\232\346\234\252\345\217\221\347\216\260\351\227\256\351\242\230\351\241\271\347\233\256,\350\257\267\347\273\247\347\273\255\347\255\211\345\276\205\344\275\223\346\243\200\347\273\223\346\236\234", nullptr));
        pushButton->setText(QCoreApplication::translate("Home2Widget", "\345\217\226\346\266\210\344\275\223\346\243\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home2Widget: public Ui_Home2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME2WIDGET_H
