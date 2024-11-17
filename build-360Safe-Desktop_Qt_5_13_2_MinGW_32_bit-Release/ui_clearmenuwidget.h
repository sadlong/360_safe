/********************************************************************************
** Form generated from reading UI file 'clearmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEARMENUWIDGET_H
#define UI_CLEARMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClearMenuWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *ClearMenuWidget)
    {
        if (ClearMenuWidget->objectName().isEmpty())
            ClearMenuWidget->setObjectName(QString::fromUtf8("ClearMenuWidget"));
        ClearMenuWidget->resize(130, 220);
        label = new QLabel(ClearMenuWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 100, 101, 20));

        retranslateUi(ClearMenuWidget);

        QMetaObject::connectSlotsByName(ClearMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *ClearMenuWidget)
    {
        ClearMenuWidget->setWindowTitle(QCoreApplication::translate("ClearMenuWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ClearMenuWidget", "\346\210\221\346\230\257\345\274\271\345\207\272\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClearMenuWidget: public Ui_ClearMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEARMENUWIDGET_H
