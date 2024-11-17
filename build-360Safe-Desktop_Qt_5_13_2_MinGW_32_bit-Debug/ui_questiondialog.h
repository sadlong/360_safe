/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QWidget *topWidget;
    QWidget *icon;
    QLabel *lbTitle;
    QPushButton *pbClose;
    QPushButton *pbMin;
    QPushButton *pbLuntan;
    QWidget *mainWidget;
    QWidget *next;
    QWidget *nextIcon;
    QLabel *nextTitle;
    QLabel *nextPhone;
    QLabel *nextQQ;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *nextTextEdit;
    QToolButton *nextScreenshot;
    QToolButton *nextPhoto;
    QToolButton *nextAnnex;
    QLabel *nextOther;
    QToolButton *nextPost;
    QPushButton *nextBack;
    QComboBox *nextComboBox;
    QWidget *home;
    QWidget *question;
    QWidget *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName(QString::fromUtf8("QuestionDialog"));
        QuestionDialog->resize(670, 460);
        topWidget = new QWidget(QuestionDialog);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        topWidget->setGeometry(QRect(0, 0, 670, 30));
        icon = new QWidget(topWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(10, 5, 20, 20));
        lbTitle = new QLabel(topWidget);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(40, 5, 181, 20));
        pbClose = new QPushButton(topWidget);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(640, 7, 16, 16));
        pbMin = new QPushButton(topWidget);
        pbMin->setObjectName(QString::fromUtf8("pbMin"));
        pbMin->setGeometry(QRect(610, 7, 16, 16));
        pbLuntan = new QPushButton(topWidget);
        pbLuntan->setObjectName(QString::fromUtf8("pbLuntan"));
        pbLuntan->setGeometry(QRect(470, 0, 131, 32));
        mainWidget = new QWidget(QuestionDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setGeometry(QRect(0, 30, 670, 430));
        next = new QWidget(mainWidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(0, 0, 670, 460));
        nextIcon = new QWidget(next);
        nextIcon->setObjectName(QString::fromUtf8("nextIcon"));
        nextIcon->setGeometry(QRect(20, 10, 40, 30));
        nextTitle = new QLabel(next);
        nextTitle->setObjectName(QString::fromUtf8("nextTitle"));
        nextTitle->setGeometry(QRect(70, 20, 231, 16));
        nextPhone = new QLabel(next);
        nextPhone->setObjectName(QString::fromUtf8("nextPhone"));
        nextPhone->setGeometry(QRect(20, 60, 101, 16));
        nextQQ = new QLabel(next);
        nextQQ->setObjectName(QString::fromUtf8("nextQQ"));
        nextQQ->setGeometry(QRect(20, 90, 101, 16));
        lineEdit = new QLineEdit(next);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 60, 291, 21));
        lineEdit_2 = new QLineEdit(next);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 90, 181, 21));
        nextTextEdit = new QTextEdit(next);
        nextTextEdit->setObjectName(QString::fromUtf8("nextTextEdit"));
        nextTextEdit->setGeometry(QRect(20, 130, 631, 141));
        nextScreenshot = new QToolButton(next);
        nextScreenshot->setObjectName(QString::fromUtf8("nextScreenshot"));
        nextScreenshot->setGeometry(QRect(360, 280, 81, 22));
        nextPhoto = new QToolButton(next);
        nextPhoto->setObjectName(QString::fromUtf8("nextPhoto"));
        nextPhoto->setGeometry(QRect(460, 280, 81, 22));
        nextAnnex = new QToolButton(next);
        nextAnnex->setObjectName(QString::fromUtf8("nextAnnex"));
        nextAnnex->setGeometry(QRect(560, 280, 81, 22));
        nextOther = new QLabel(next);
        nextOther->setObjectName(QString::fromUtf8("nextOther"));
        nextOther->setGeometry(QRect(20, 320, 621, 21));
        nextPost = new QToolButton(next);
        nextPost->setObjectName(QString::fromUtf8("nextPost"));
        nextPost->setEnabled(false);
        nextPost->setGeometry(QRect(520, 371, 121, 41));
        nextBack = new QPushButton(next);
        nextBack->setObjectName(QString::fromUtf8("nextBack"));
        nextBack->setGeometry(QRect(20, 380, 91, 32));
        nextComboBox = new QComboBox(next);
        nextComboBox->setObjectName(QString::fromUtf8("nextComboBox"));
        nextComboBox->setGeometry(QRect(130, 90, 104, 26));
        home = new QWidget(mainWidget);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(0, 0, 670, 430));
        question = new QWidget(home);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(0, 0, 271, 431));
        widget = new QWidget(home);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 0, 401, 421));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(5, 8, 401, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        home->raise();
        next->raise();
        mainWidget->raise();
        topWidget->raise();

        retranslateUi(QuestionDialog);

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QCoreApplication::translate("QuestionDialog", "Dialog", nullptr));
        lbTitle->setText(QCoreApplication::translate("QuestionDialog", "360\345\217\215\351\246\210\345\273\272\350\256\256", nullptr));
        pbClose->setText(QString());
        pbMin->setText(QString());
        pbLuntan->setText(QCoreApplication::translate("QuestionDialog", "PushButton", nullptr));
        nextTitle->setText(QCoreApplication::translate("QuestionDialog", "\346\202\250\346\234\211\344\273\200\344\271\210\345\273\272\350\256\256\346\203\263\345\257\271\346\210\221\344\273\254\350\257\264", nullptr));
        nextPhone->setText(QCoreApplication::translate("QuestionDialog", "\344\275\240\347\232\204\346\211\213\346\234\272\345\236\213\345\217\267:", nullptr));
        nextQQ->setText(QCoreApplication::translate("QuestionDialog", "\344\275\240\347\232\204\350\201\224\347\263\273\346\226\271\345\274\217:", nullptr));
        nextScreenshot->setText(QCoreApplication::translate("QuestionDialog", "...", nullptr));
        nextPhoto->setText(QCoreApplication::translate("QuestionDialog", "...", nullptr));
        nextAnnex->setText(QCoreApplication::translate("QuestionDialog", "...", nullptr));
        nextOther->setText(QCoreApplication::translate("QuestionDialog", "\350\257\267\345\260\275\351\207\217\347\225\231\344\270\213\346\202\250\347\232\204\347\224\265\350\257\235,QQ\347\255\211\350\201\224\347\263\273\346\226\271\345\274\217,\345\246\202\345\207\272\347\216\260\351\227\256\351\242\230\346\227\266\347\232\204\346\210\252\345\233\276,\344\273\245\346\226\271\344\276\277\346\210\221\344\273\254\346\237\245\346\211\276\351\227\256\351\242\230\347\232\204\345\216\237\345\233\240.", nullptr));
        nextPost->setText(QCoreApplication::translate("QuestionDialog", "...", nullptr));
        nextBack->setText(QCoreApplication::translate("QuestionDialog", "<<  \350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
