#include "ConfFile.h"
#include <qsettings.h>
#include <qapplication.h>
#include<qfile.h>
#include<qdebug.h>
#include<QStandardItem>
#include"snap7.h"
ConfFile *ConfFile::m_confileInstance = NULL;
ConfFile::ConfFile()
{
	m_serverip = "0.0.0.0";
	m_serverpot = 102;
	m_rack = 0;
	m_slot = 0;
	settings = NULL;
	QString fileName;
	fileName = QCoreApplication::applicationDirPath();
	fileName += "/DataPlot.ini";
	QFile file(fileName);
	settings = new QSettings(fileName, QSettings::IniFormat);
	
	if (file.exists())
	{
		qDebug() << "文件存在";
		ReadConfFile();
	}
	else
	{
		qDebug() << "文件不存在";
		WriteConfFile();
	}
	

}

ConfFile::~ConfFile()
{
	WriteConfFile();
}
ConfFile *ConfFile::GetInstance()
{
	if (!m_confileInstance)
	{
		m_confileInstance = new ConfFile();
	}

	return m_confileInstance;
}
void ConfFile::ReadConfFile()
{
	
	settings->beginGroup("Main");
	m_serverip = settings->value("serverip").toString();
	m_serverpot = settings->value("serverpot").toInt();
	m_rack = settings->value("rack").toInt();
	m_slot = settings->value("slot").toInt();
	settings->endGroup();

	settings->beginGroup("Area");

	settings->endGroup();
}

void ConfFile::WriteConfFile()
{
	settings->beginGroup("Main");
	settings->setValue("serverip", m_serverip);
	settings->setValue("serverpot", m_serverpot);
	settings->setValue("rack", m_rack);
	settings->setValue("slot", m_slot);
	settings->endGroup();

	settings->beginGroup("AreaList");
	/*			
			S7AreaPE 0x81 Process Inputs.
			S7AreaPA 0x82 Process Outputs.
			S7AreaMK 0x83 Merkers.
			S7AreaDB 0x84 DB
	*/
	//QMap<QString, QMap<int, int>>::Iterator itr = m_AreadInfoMap.begin();
	//QList<QString> ArearsName;
	//
	
	
	
	settings->endGroup();
}
QString ConfFile::GetAreadString(int id)
{
	switch (id)
	{
	case S7AreaPE:
		return "S7AreaPE";
	case S7AreaPA:
		return "S7AreaPA";
	case S7AreaMK:
		return "S7AreaMK";
	case S7AreaDB:
		return "S7AreaDB";
	default:
		return "";
		
	}
}