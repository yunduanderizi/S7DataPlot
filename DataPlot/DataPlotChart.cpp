#include "DataPlotChart.h"
#include<qdebug.h>
DataPlotChart::DataPlotChart(QWidget *parent)
	: QWidget(parent)
{
	m_linesCount = 6;
	
/*
		QLineSeries  *lineseries1 = new QLineSeries(this);
		QLineSeries  *lineseries2 = new QLineSeries(this);
		getRandData(lineseries1);
		lineseries1->setColor(Qt::blue);
		lineList.push_back(lineseries1);
		getRandData(lineseries2);
		lineseries2->setColor(Qt::red);
		lineList.push_back(lineseries2);
		m_chart->addSeries(lineseries1);
		m_chart->addSeries(lineseries2);*/
	QLineSeries *pLineSeries = new QLineSeries();
	
	/*pLineSeries->append(1, 5);
	pLineSeries->append(3, 4);
	QList<QPointF> list;
	list << QPointF(4, 8) << QPointF(6, 10) << QPointF(7, 3) << QPointF(10, 6);
	pLineSeries->append(list);*/
	getRandData(pLineSeries);
	pLineSeries->setName(QStringLiteral("蓝色线"));

	//创建红色线
	QLineSeries *pLineSeries2 = new QLineSeries();
	
	pLineSeries2->append(1, 2);
	pLineSeries2->append(3, 4);
	QList<QPointF> list2;
	list2 << QPointF(4, 1) << QPointF(5, 10) << QPointF(9, 6) << QPointF(10, 20);
	pLineSeries2->append(list2);
	//getRandData(pLineSeries2);
	pLineSeries2->setName(QStringLiteral("红色线"));
	pLineSeries2->setColor(Qt::red);

	pLineSeries->setPointLabelsVisible(false);
	
	pLineSeries->setPointsVisible(true);
	


	m_chart = new QChart();
	m_chart->addSeries(pLineSeries);
	m_chart->addSeries(pLineSeries2);
	m_chart->createDefaultAxes();

	m_pView = new QChartView(this);
	m_pView->setChart(m_chart);

	m_pView->setRenderHint(QPainter::Antialiasing); //设置抗锯齿  
	
	m_chart->setTitle(QStringLiteral("测试QChart运行"));
	m_chart->setTheme(QChart::ChartThemeBlueCerulean);
	pLineSeries->setPen(QPen(Qt::red, 3, Qt::SolidLine));
	pLineSeries2->setPen(QPen(Qt::green,3, Qt::SolidLine));
	pLineSeries->setPointLabelsColor(Qt::green);
	m_pView->show(); //显示  
	this->showMaximized();

}

DataPlotChart::~DataPlotChart()
{

}
void DataPlotChart::resizeEvent(QResizeEvent *event)
{
	m_pView->resize(event->size().width(),event->size().height());   //画布大小  
}
void DataPlotChart::getRandData(QLineSeries * lineseries)
{
	qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
	QList<QPointF> list;
	for (int i = 0; i < 50; i++)
	{
		list.append(QPointF(i, qrand() % 100));	
	}
	lineseries->append(list);
}
