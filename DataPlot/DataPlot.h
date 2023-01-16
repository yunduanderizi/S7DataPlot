#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DataPlot.h"
#include"S7Communication.h"
#include "ConfFile.h"
#include <qmdiarea.h>
#include "DataPlotChart.h"
#include "S7SettingDialog.h"
#include <qlist.h>
class DataPlot : public QMainWindow
{
    Q_OBJECT

public:
    DataPlot(QWidget *parent = nullptr);
    ~DataPlot();

private:
    Ui::DataPlotClass ui;
	S7Communication * S7Client;
	QMdiArea * m_CenterMdiArea;    //中心多文档空间
	

	DataPlotChart * m_plotchart;
	S7SettingDialog * s7setiingDlg;

	QList< QMdiSubWindow *> subWindowList;
public slots:
	void s7Setting();


};
