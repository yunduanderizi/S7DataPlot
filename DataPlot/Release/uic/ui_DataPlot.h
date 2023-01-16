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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataPlotClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataPlotClass)
    {
        if (DataPlotClass->objectName().isEmpty())
            DataPlotClass->setObjectName(QString::fromUtf8("DataPlotClass"));
        DataPlotClass->resize(1106, 840);
        centralWidget = new QWidget(DataPlotClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DataPlotClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataPlotClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1106, 23));
        DataPlotClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DataPlotClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DataPlotClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DataPlotClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DataPlotClass->setStatusBar(statusBar);

        retranslateUi(DataPlotClass);

        QMetaObject::connectSlotsByName(DataPlotClass);
    } // setupUi

    void retranslateUi(QMainWindow *DataPlotClass)
    {
        DataPlotClass->setWindowTitle(QApplication::translate("DataPlotClass", "DataPlot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataPlotClass: public Ui_DataPlotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPLOT_H
