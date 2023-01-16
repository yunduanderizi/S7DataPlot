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
	delete settings;
	//WriteConfFile();
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

	int arraysize= settings->beginReadArray("AreaInofs");
	m_AreaList.clear();
	m_AreaNumList.clear();
	m_DataTypeList.clear();
	m_DataAddrList.clear();
	for (int i = 0; i < arraysize; ++i) {

		QString AreaName;
		QString AreaNum;
		QString DataType;
		int DataAddr;
		settings->setArrayIndex(i);
		AreaName =settings->value("Area").toString();
		AreaNum = settings->value("AreaNum").toString();
		DataType = settings->value("DataType").toString();
		DataAddr = settings->value("DataAddr").toInt();
		m_AreaList.append(AreaName);
		m_AreaNumList.append(AreaNum);
		m_DataTypeList.append(DataType);
		m_DataAddrList.append(DataAddr);
	}
	settings->endArray();

}

void ConfFile::WriteConfFile()
{

	settings->beginGroup("Main");
	settings->setValue("serverip", m_serverip);
	settings->setValue("serverpot", m_serverpot);
	settings->setValue("rack", m_rack);
	settings->setValue("slot", m_slot);
	settings->endGroup();



	
	settings->beginWriteArray("AreaInofs");
	for (int i = 0; i < m_AreaList.size(); ++i) {
		
		settings->setArrayIndex(i);
		settings->setValue("Area",m_AreaList[i]);
		settings->setValue("AreaNum",m_AreaNumList[i]);
		settings->setValue("DataType",m_DataTypeList[i]);
		settings->setValue("DataAddr",m_DataAddrList[i]);
	}
	settings->endArray();
	
	
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