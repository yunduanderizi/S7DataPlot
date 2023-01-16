#pragma once

#include <QObject>
#include <qsettings.h>
#include <qmap.h>
#include<qlist.h>
#include<qvector.h>

class ConfFile  : public QObject
{
	Q_OBJECT

public:
	ConfFile();
	~ConfFile();
	void ReadConfFile();
	void WriteConfFile();

	QString GetServerIp() { return m_serverip; }
	int GetServerPort() { return m_serverpot; }
	int GetRack() { return m_rack; }
	int GetSlot() { return m_slot; }

	void SetServerIp(QString ip) { m_serverip = ip; }
	void SetServerPort(int port) { m_serverpot = port; }
	void SetRack(int rack) { m_rack = rack; }
	void SetSlot(int slot) { m_slot = slot; }
	
	void SetAreaList(QVector<QString>&areaList) { m_AreaList = areaList; }
	void SetDBNumList(QVector<QString>&dbnumList) { m_AreaNumList = dbnumList; }
	void SetDataTypeList(QVector<QString>&datatypeList) { m_DataTypeList = datatypeList; }
	void SetDataAddrList(QVector<int>&dataTypeList) { m_DataAddrList = dataTypeList; }

	QVector<QString> getAreaList() { return  m_AreaList; }
	QVector<QString> getDBNumList() { return  m_AreaNumList ; }
	QVector<QString> getDataTypeList() { return  m_DataTypeList ; }
	QVector<int> getDataAddrList() { return m_DataAddrList; }
	
	QString GetAreadString(int id);

	static ConfFile * GetInstance();
private:
	QSettings * settings;
	QString m_serverip;
	int m_serverpot;
	int m_rack;
	int m_slot;
	int m_s7seqCycle;						//S7协议发送周期  ms
	int m_s7timeout;						//S7超时时间  ms
	int m_plctype;						    //西门子PLC 类型  300  需要用 0  2 
	/*
			S7AreaPE 0x81 Process Inputs.
			S7AreaPA 0x82 Process Outputs.
			S7AreaMK 0x83 Merkers.
			S7AreaDB 0x84 DB
			S7AreaCT 0x1C Counters.
			S7AreaTM 0x1D Timers
			WordLen table
			Value Mean

			S7WLBit 0x01 Bit (inside a word)
			S7WLByte 0x02 Byte (8 bit)
			S7WLWord 0x04 Word (16 bit)
			S7WLDWord 0x06 Double Word (32 bit)
			S7WLReal 0x08 Real (32 bit float)
			S7WLCounter 0x1C Counter (16 bit)
			S7WLTimer 0x1D Timer (16 bit)
	*/
	//QVector<int> m_S7AreaList;			//s7 块列表
	//QVector<int> m_S7DataTypeList;      // S7 快列表中变量的类型

	QVector<QString> m_AreaList;
	QVector<QString> m_AreaNumList;
	QVector<QString> m_DataTypeList;
	QVector<int>     m_DataAddrList;
	
	static ConfFile * m_confileInstance;

};
