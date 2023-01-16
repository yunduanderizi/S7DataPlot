#include "DataPlot.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QDebug>
#include <QTime>
#include "ConfFile.h"
#define _TIME_ qPrintable (QTime::currentTime ().toString ("hh:mm:ss:zzz"))//时间记录
void myLogput(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
	QString txt;
	switch (type) {
		//调试信息提示
	case QtDebugMsg:
		txt = QString("Debug: %1: %2: %3: %4").arg(_TIME_).arg(context.file).arg(context.line).arg(msg);
		//保存日志格式为：时间： 文件名：日志行号：日志消息
		break;
		//一般的warning提示
	case QtWarningMsg:
		txt = QString("Warning: %1").arg(msg);
		//保存格式可参考第一个case修改，这里不再修改
		break;
		//严重错误提示
	case QtCriticalMsg:
		txt = QString("Critical: %1").arg(msg);
		break;
		//致命错误提示
	case QtFatalMsg:
		txt = QString("Fatal: %1").arg(msg);
		abort();
	}

	QString strPath = QCoreApplication::applicationDirPath() + "/" + "log.txt";
	QFile outFile1(strPath);
	outFile1.open(QIODevice::WriteOnly | QIODevice::Append);
	QTextStream out(&outFile1);
	out << txt << endl;

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	//qInstallMessageHandler(myLogput);
	
    DataPlot w;
    w.show();
	
    return a.exec();
}
