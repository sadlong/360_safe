/********************************************************************************
** Form generated from reading UI file 'scanwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANWIDGET_H
#define UI_SCANWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <customviews/scanwidget.h>

QT_BEGIN_NAMESPACE

class Ui_ScanWidget
{
public:
    QWidget *icon;
    QLabel *title;
    QLabel *subtitle;
    ScanCT *scan;

    void setupUi(QWidget *ScanWidget)
    {
        if (ScanWidget->objectName().isEmpty())
            ScanWidget->setObjectName(QString::fromUtf8("ScanWidget"));
        ScanWidget->resize(120, 130);
        icon = new QWidget(ScanWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(40, 30, 30, 30));
        title = new QLabel(ScanWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 70, 121, 16));
        title->setStyleSheet(QString::fromUtf8(""));
        subtitle = new QLabel(ScanWidget);
        subtitle->setObjectName(QString::fromUtf8("subtitle"));
        subtitle->setGeometry(QRect(30, 100, 60, 20));
        scan = new ScanCT(ScanWidget);
        scan->setObjectName(QString::fromUtf8("scan"));
        scan->setGeometry(QRect(40, 30, 30, 30));

        retranslateUi(ScanWidget);

        QMetaObject::connectSlotsByName(ScanWidget);
    } // setupUi

    void retranslateUi(QWidget *ScanWidget)
    {
        ScanWidget->setWindowTitle(QCoreApplication::translate("ScanWidget", "Form", nullptr));
        title->setText(QCoreApplication::translate("ScanWidget", "TextLabel", nullptr));
        subtitle->setText(QCoreApplication::translate("ScanWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScanWidget: public Ui_ScanWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANWIDGET_H
