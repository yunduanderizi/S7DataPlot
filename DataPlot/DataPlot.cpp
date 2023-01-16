#include "DataPlot.h"
#include"ConfFile.h"
#include<qdebug.h>
#include <qmdisubwindow.h>
const char * S7WindowTitle = "S7Setting";
DataPlot::DataPlot(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	ConfFile::GetInstance()->ReadConfFile();
	m_CenterMdiArea = new QMdiArea(this);
	m_plotchart = new DataPlotChart(this);
	


	m_plotchart->showMaximized();
	QMdiSubWindow *  chartSubWindow = new QMdiSubWindow(this);
	chartSubWindow->setWindowTitle("chart");
	chartSubWindow->setWidget(m_plotchart);
	chartSubWindow->setAttribute(Qt::WA_DeleteOnClose);
	m_CenterMdiArea->addSubWindow(chartSubWindow);
	
	
	m_CenterMdiArea->setViewMode(QMdiArea::TabbedView); // Tab多页显示模式
	m_CenterMdiArea->setTabsClosable(true); //页面可关闭
	m_CenterMdiArea->setTabShape(QTabWidget::Rounded);
	
	
	
	
	
	
	this->setCentralWidget(m_CenterMdiArea);
	connect(ui.actionS7Setting, SIGNAL(triggered()), this, SLOT(s7Setting()));

	//m_CenterMdiArea->addSubWindow()
	/*S7Client = new S7Communication;
	char addr[] = "192.168.0.105";
	S7Client->setConnection(addr);*/
	
	
}

DataPlot::~DataPlot()
{
	ConfFile::GetInstance()->WriteConfFile();

}

void DataPlot::s7Setting()
{
	
	subWindowList = m_CenterMdiArea->subWindowList();
	QList<QMdiSubWindow*>::const_iterator  itr ;
	for (itr = subWindowList.constBegin(); itr != subWindowList.constEnd(); ++itr)
	{
		
		qDebug() << "titile:" << (*itr) ->windowTitle();
		if (!QString::compare(QString(S7WindowTitle), QString((*itr)->windowTitle()), Qt::CaseSensitive)) {
			qDebug() << "EQUEAL";
			return;
			
		}	
	}

	S7SettingDialog  * dlg = new S7SettingDialog(this);
	QMdiSubWindow * s7subwindow = new QMdiSubWindow(this);
	s7subwindow->setWindowTitle(S7WindowTitle);
	s7subwindow->setWidget(dlg);
	s7subwindow->setAttribute(Qt::WA_DeleteOnClose);
	m_CenterMdiArea->addSubWindow(s7subwindow);
	s7subwindow->show();


	
	
}