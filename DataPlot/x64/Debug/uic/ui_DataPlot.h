/********************************************************************************
** Form generated from reading UI file 'DataPlot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPLOT_H
#define UI_DATAPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataPlotClass
{
public:
    QAction *actionBegin;
    QAction *actionStop;
    QAction *actionS7Setting;
    QAction *actionMODBUSSetting;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataPlotClass)
    {
        if (DataPlotClass->objectName().isEmpty())
            DataPlotClass->setObjectName(QString::fromUtf8("DataPlotClass"));
        DataPlotClass->resize(1106, 867);
        actionBegin = new QAction(DataPlotClass);
        actionBegin->setObjectName(QString::fromUtf8("actionBegin"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/DataPlot/icons/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBegin->setIcon(icon);
        actionStop = new QAction(DataPlotClass);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/DataPlot/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon1);
        actionS7Setting = new QAction(DataPlotClass);
        actionS7Setting->setObjectName(QString::fromUtf8("actionS7Setting"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/DataPlot/icons/\350\256\276\347\275\256 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionS7Setting->setIcon(icon2);
        actionMODBUSSetting = new QAction(DataPlotClass);
        actionMODBUSSetting->setObjectName(QString::fromUtf8("actionMODBUSSetting"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/DataPlot/icons/\350\256\276\347\275\256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMODBUSSetting->setIcon(icon3);
        centralWidget = new QWidget(DataPlotClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DataPlotClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataPlotClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1106, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        DataPlotClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(DataPlotClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DataPlotClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionBegin);
        menu->addAction(actionStop);
        menu_2->addAction(actionS7Setting);
        menu_2->addAction(actionMODBUSSetting);

        retranslateUi(DataPlotClass);

        QMetaObject::connectSlotsByName(DataPlotClass);
    } // setupUi

    void retranslateUi(QMainWindow *DataPlotClass)
    {
        DataPlotClass->setWindowTitle(QApplication::translate("DataPlotClass", "DataPlot", nullptr));
        actionBegin->setText(QApplication::translate("DataPlotClass", "\345\274\200\345\247\213", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBegin->setToolTip(QApplication::translate("DataPlotClass", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("DataPlotClass", "\345\201\234\346\255\242", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("DataPlotClass", "\345\201\234\346\255\242\351\207\207\351\233\206", nullptr));
#endif // QT_NO_TOOLTIP
        actionS7Setting->setText(QApplication::translate("DataPlotClass", "S7", nullptr));
#ifndef QT_NO_TOOLTIP
        actionS7Setting->setToolTip(QApplication::translate("DataPlotClass", "S7\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        actionMODBUSSetting->setText(QApplication::translate("DataPlotClass", "MODBUS", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMODBUSSetting->setToolTip(QApplication::translate("DataPlotClass", "MODBUS\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("DataPlotClass", "\346\216\247\345\210\266", nullptr));
        menu_2->setTitle(QApplication::translate("DataPlotClass", "\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataPlotClass: public Ui_DataPlotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPLOT_H
