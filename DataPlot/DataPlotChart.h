#pragma once

#include <QChart>
#include <qwidget.h>
#include <QChartView>
#include <qlineseries.h>
#include <qsplineseries.h>
#include <QAreaSeries>
#include <QDateTimeAxis>
#include <QValueAxis>
#include <QDateTime>
#include <QColor>
#include <qlist.h>
QT_CHARTS_USE_NAMESPACE
class DataPlotChart  : public QWidget
{
	Q_OBJECT

public:
	DataPlotChart(QWidget *parent);
	~DataPlotChart();

protected:
	void resizeEvent(QResizeEvent *event);

private:
	void getRandData(QLineSeries* lineseries);
private:
	QChartView *m_pView;
	QChart  * m_chart;


	int m_linesCount;   //线的个数  对应的数据的个数
	QVector<QLineSeries * > lineList;
	QVector<QColor>     lineColorList;
	QVector<QString>    LineTileList;
};