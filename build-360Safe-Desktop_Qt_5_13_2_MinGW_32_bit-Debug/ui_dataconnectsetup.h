/********************************************************************************
** Form generated from reading UI file 'dataconnectsetup.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACONNECTSETUP_H
#define UI_DATACONNECTSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataConnectSetup
{
public:

    void setupUi(QWidget *DataConnectSetup)
    {
        if (DataConnectSetup->objectName().isEmpty())
            DataConnectSetup->setObjectName(QString::fromUtf8("DataConnectSetup"));
        DataConnectSetup->resize(400, 300);

        retranslateUi(DataConnectSetup);

        QMetaObject::connectSlotsByName(DataConnectSetup);
    } // setupUi

    void retranslateUi(QWidget *DataConnectSetup)
    {
        DataConnectSetup->setWindowTitle(QCoreApplication::translate("DataConnectSetup", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataConnectSetup: public Ui_DataConnectSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACONNECTSETUP_H
