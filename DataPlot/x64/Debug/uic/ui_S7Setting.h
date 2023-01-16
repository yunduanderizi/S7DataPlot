/********************************************************************************
** Form generated from reading UI file 'S7Setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S7SETTING_H
#define UI_S7SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ip;
    QLabel *label_2;
    QLineEdit *lineEdit__port;
    QLabel *label_3;
    QLineEdit *lineEdit_rack;
    QLabel *label_4;
    QLineEdit *lineEdit_slot;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_connecttest;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_readdata;
    QTableWidget *tableWidget_S7Aread;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1126, 650);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_ip = new QLineEdit(Form);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));

        horizontalLayout->addWidget(lineEdit_ip);

        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit__port = new QLineEdit(Form);
        lineEdit__port->setObjectName(QString::fromUtf8("lineEdit__port"));

        horizontalLayout->addWidget(lineEdit__port);

        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_rack = new QLineEdit(Form);
        lineEdit_rack->setObjectName(QString::fromUtf8("lineEdit_rack"));

        horizontalLayout->addWidget(lineEdit_rack);

        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_slot = new QLineEdit(Form);
        lineEdit_slot->setObjectName(QString::fromUtf8("lineEdit_slot"));

        horizontalLayout->addWidget(lineEdit_slot);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_connecttest = new QPushButton(Form);
        pushButton_connecttest->setObjectName(QString::fromUtf8("pushButton_connecttest"));

        horizontalLayout->addWidget(pushButton_connecttest);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_readdata = new QPushButton(Form);
        pushButton_readdata->setObjectName(QString::fromUtf8("pushButton_readdata"));

        horizontalLayout->addWidget(pushButton_readdata);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget_S7Aread = new QTableWidget(Form);
        tableWidget_S7Aread->setObjectName(QString::fromUtf8("tableWidget_S7Aread"));

        verticalLayout->addWidget(tableWidget_S7Aread);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "IP:", nullptr));
        label_2->setText(QApplication::translate("Form", "\347\253\257\345\217\243", nullptr));
        label_3->setText(QApplication::translate("Form", "Rack", nullptr));
        label_4->setText(QApplication::translate("Form", "slot", nullptr));
        pushButton_connecttest->setText(QApplication::translate("Form", "\346\265\213\350\257\225\350\277\236\346\216\245", nullptr));
        pushButton_readdata->setText(QApplication::translate("Form", "\346\265\213\350\257\225\350\257\273\345\217\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S7SETTING_H
