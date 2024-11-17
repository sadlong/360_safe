/********************************************************************************
** Form generated from reading UI file 'loginpopupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPOPUPWIDGET_H
#define UI_LOGINPOPUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPopupWidget
{
public:

    void setupUi(QWidget *LoginPopupWidget)
    {
        if (LoginPopupWidget->objectName().isEmpty())
            LoginPopupWidget->setObjectName(QString::fromUtf8("LoginPopupWidget"));
        LoginPopupWidget->resize(400, 300);

        retranslateUi(LoginPopupWidget);

        QMetaObject::connectSlotsByName(LoginPopupWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginPopupWidget)
    {
        LoginPopupWidget->setWindowTitle(QCoreApplication::translate("LoginPopupWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPopupWidget: public Ui_LoginPopupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPOPUPWIDGET_H
