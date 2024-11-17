/********************************************************************************
** Form generated from reading UI file 'actionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONSWIDGET_H
#define UI_ACTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActionsWidget
{
public:
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;

    void setupUi(QWidget *ActionsWidget)
    {
        if (ActionsWidget->objectName().isEmpty())
            ActionsWidget->setObjectName(QString::fromUtf8("ActionsWidget"));
        ActionsWidget->resize(700, 666);
        toolButton = new QToolButton(ActionsWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(100, 80, 26, 22));
        radioButton = new QRadioButton(ActionsWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(150, 610, 100, 20));
        checkBox = new QCheckBox(ActionsWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(660, 320, 86, 20));

        retranslateUi(ActionsWidget);

        QMetaObject::connectSlotsByName(ActionsWidget);
    } // setupUi

    void retranslateUi(QWidget *ActionsWidget)
    {
        ActionsWidget->setWindowTitle(QCoreApplication::translate("ActionsWidget", "Form", nullptr));
        toolButton->setText(QCoreApplication::translate("ActionsWidget", "...", nullptr));
        radioButton->setText(QCoreApplication::translate("ActionsWidget", "RadioButton", nullptr));
        checkBox->setText(QCoreApplication::translate("ActionsWidget", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActionsWidget: public Ui_ActionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONSWIDGET_H
