#include "DataPlot.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QDebug>
#include <QTime>
#include "ConfFile.h"
#define _TIME_ qPrintable (QTime::currentTime ().toString ("hh:mm:ss:zzz"))//ʱ���¼
void myLogput(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
	QString txt;
	switch (type) {
		//������Ϣ��ʾ
	case QtDebugMsg:
		txt = QString("Debug: %1: %2: %3: %4").arg(_TIME_).arg(context.file).arg(context.line).arg(msg);
		//������־��ʽΪ��ʱ�䣺 �ļ�������־�кţ���־��Ϣ
		break;
		//һ���warning��ʾ
	case QtWarningMsg:
		txt = QString("Warning: %1").arg(msg);
		//�����ʽ�ɲο���һ��case�޸ģ����ﲻ���޸�
		break;
		//���ش�����ʾ
	case QtCriticalMsg:
		txt = QString("Critical: %1").arg(msg);
		break;
		//����������ʾ
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