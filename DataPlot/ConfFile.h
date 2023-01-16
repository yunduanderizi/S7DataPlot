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
	
	QString GetAreadString(int id);

	static ConfFile * GetInstance();
private:
	QSettings * settings;
	QString m_serverip;
	int m_serverpot;
	int m_rack;
	int m_slot;
	int m_s7seqCycle;						//S7Э�鷢������  ms
	int m_s7timeout;						//S7��ʱʱ��  ms
	int m_plctype;						    //������PLC ����  300  ��Ҫ�� 0  2 
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
	//QVector<int> m_S7AreaList;			//s7 ���б�
	//QVector<int> m_S7DataTypeList;      // S7 ���б��б���������
	QMap<int, int> m_S7DataList;       // ��� ��ַ�� �������͵� map��
	QMap<QString, QMap<int, int>> m_AreadInfoMap; //��ſ�����  �͵�ַ��map��
	
	static ConfFile * m_confileInstance;

};