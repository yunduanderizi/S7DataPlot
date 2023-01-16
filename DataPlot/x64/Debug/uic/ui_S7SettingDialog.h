/********************************************************************************
** Form generated from reading UI file 'S7SettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S7SETTINGDIALOG_H
#define UI_S7SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_S7SettingDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_testConnect;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_testRead;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_addLine;
    QPushButton *pushButton_delLine;
    QSpacerItem *horizontalSpacer_5;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_save;

    void setupUi(QWidget *S7SettingDialogClass)
    {
        if (S7SettingDialogClass->objectName().isEmpty())
            S7SettingDialogClass->setObjectName(QString::fromUtf8("S7SettingDialogClass"));
        S7SettingDialogClass->resize(1053, 514);
        verticalLayout = new QVBoxLayout(S7SettingDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(S7SettingDialogClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(25, 30));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(S7SettingDialogClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(S7SettingDialogClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 30));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(S7SettingDialogClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(S7SettingDialogClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(40, 30));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(S7SettingDialogClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        label_4 = new QLabel(S7SettingDialogClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(40, 30));

        horizontalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(S7SettingDialogClass);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_testConnect = new QPushButton(S7SettingDialogClass);
        pushButton_testConnect->setObjectName(QString::fromUtf8("pushButton_testConnect"));

        horizontalLayout->addWidget(pushButton_testConnect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_testRead = new QPushButton(S7SettingDialogClass);
        pushButton_testRead->setObjectName(QString::fromUtf8("pushButton_testRead"));

        horizontalLayout->addWidget(pushButton_testRead);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_addLine = new QPushButton(S7SettingDialogClass);
        pushButton_addLine->setObjectName(QString::fromUtf8("pushButton_addLine"));

        horizontalLayout_3->addWidget(pushButton_addLine);

        pushButton_delLine = new QPushButton(S7SettingDialogClass);
        pushButton_delLine->setObjectName(QString::fromUtf8("pushButton_delLine"));

        horizontalLayout_3->addWidget(pushButton_delLine);

        horizontalSpacer_5 = new QSpacerItem(1032, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView = new QTableView(S7SettingDialogClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_cancel = new QPushButton(S7SettingDialogClass);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout_2->addWidget(pushButton_cancel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_save = new QPushButton(S7SettingDialogClass);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        horizontalLayout_2->addWidget(pushButton_save);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(S7SettingDialogClass);

        QMetaObject::connectSlotsByName(S7SettingDialogClass);
    } // setupUi

    void retranslateUi(QWidget *S7SettingDialogClass)
    {
        S7SettingDialogClass->setWindowTitle(QApplication::translate("S7SettingDialogClass", "S7SettingDialog", nullptr));
        label->setText(QApplication::translate("S7SettingDialogClass", "IP", nullptr));
        label_2->setText(QApplication::translate("S7SettingDialogClass", "\347\253\257\345\217\243", nullptr));
        label_3->setText(QApplication::translate("S7SettingDialogClass", "Rack", nullptr));
        label_4->setText(QApplication::translate("S7SettingDialogClass", "slot", nullptr));
        pushButton_testConnect->setText(QApplication::translate("S7SettingDialogClass", "\346\265\213\350\257\225\350\277\236\346\216\245", nullptr));
        pushButton_testRead->setText(QApplication::translate("S7SettingDialogClass", "\346\265\213\350\257\225\350\257\273\345\217\226", nullptr));
        pushButton_addLine->setText(QApplication::translate("S7SettingDialogClass", "\346\267\273\345\212\240\350\241\214", nullptr));
        pushButton_delLine->setText(QApplication::translate("S7SettingDialogClass", "\345\210\240\351\231\244\350\241\214", nullptr));
        pushButton_cancel->setText(QApplication::translate("S7SettingDialogClass", "\344\277\235\345\255\230", nullptr));
        pushButton_save->setText(QApplication::translate("S7SettingDialogClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class S7SettingDialogClass: public Ui_S7SettingDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S7SETTINGDIALOG_H
