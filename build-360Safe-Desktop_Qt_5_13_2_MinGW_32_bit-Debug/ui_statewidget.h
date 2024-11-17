/********************************************************************************
** Form generated from reading UI file 'statewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATEWIDGET_H
#define UI_STATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StateWidget
{
public:
    QWidget *icon;
    QLabel *title;
    QWidget *state;

    void setupUi(QWidget *StateWidget)
    {
        if (StateWidget->objectName().isEmpty())
            StateWidget->setObjectName(QString::fromUtf8("StateWidget"));
        StateWidget->resize(70, 70);
        icon = new QWidget(StateWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(15, 5, 40, 40));
        title = new QLabel(StateWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 45, 70, 20));
        state = new QWidget(StateWidget);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(38, 22, 20, 20));

        retranslateUi(StateWidget);

        QMetaObject::connectSlotsByName(StateWidget);
    } // setupUi

    void retranslateUi(QWidget *StateWidget)
    {
        StateWidget->setWindowTitle(QCoreApplication::translate("StateWidget", "Form", nullptr));
        title->setText(QCoreApplication::translate("StateWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StateWidget: public Ui_StateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATEWIDGET_H
