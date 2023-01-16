#include "S7SettingDialog.h"
#include<qdebug.h>
#include<QModelIndex>
#include "ConfFile.h"
#define fixColum 5

S7SettingDialog::S7SettingDialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(on_btn_save()));
	connect(ui.pushButton_cancel, SIGNAL(clicked()), this, SLOT(on_btn_Cancel()));
	connect(ui.pushButton_testConnect, SIGNAL(clicked()), this, SLOT(on_btn_testConnect()));
	connect(ui.pushButton_testRead, SIGNAL(clicked()), this, SLOT(on_btn_testRead()));
	connect(ui.pushButton_addLine, SIGNAL(clicked()), this, SLOT(on_add_line()));
	connect(ui.pushButton_delLine, SIGNAL(clicked()), this, SLOT(on_del_line()));
	
	theModel = new QStandardItemModel(0, fixColum, this); //创建数据模型
	theSelection = new QItemSelectionModel(theModel);//Item选择模型

	theModel->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("Area")));
	theModel->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("AreaNum")));
	theModel->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("DataType")));
	theModel->setHorizontalHeaderItem(3, new QStandardItem(QObject::tr("Addr")));
	theModel->setHorizontalHeaderItem(4, new QStandardItem(QObject::tr("Data")));
	connect(theSelection, SIGNAL(currentChanged(QModelIndex, QModelIndex)),
		this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));	
	ui.tableView->setModel(theModel);
	ui.tableView->setSelectionModel(theSelection);//设置选择模型
	ui.tableView->setItemDelegateForColumn(0, &AreaTypeDelegate);  
	ui.tableView->setItemDelegateForColumn(2, &DataTypeDelegate);  
	RefreshConf();
	
	

}
void S7SettingDialog::RefreshConf()
{
	ConfFile::GetInstance()->ReadConfFile();
	m_AreaList = ConfFile::GetInstance()->getAreaList();
	m_AreaNumList = ConfFile::GetInstance()->getDBNumList();
	m_DataTypeList = ConfFile::GetInstance()->getDataTypeList();
	m_DataAddrList = ConfFile::GetInstance()->getDataAddrList();
	ui.lineEdit_ip->setText(ConfFile::GetInstance()->GetServerIp());
	ui.lineEdit_port->setText(QString::number(ConfFile::GetInstance()->GetServerPort()));
	ui.lineEdit_rack->setText(QString::number(ConfFile::GetInstance()->GetRack()));
	ui.lineEdit_slot->setText(QString::number(ConfFile::GetInstance()->GetSlot()));
	
	
	
	QList<QStandardItem*>    aItemList; //容器类
	

	
	for (int i = 0; i < m_AreaList.size(); i++)
	{
		QStandardItem   *aItem;
		QString str;

		aItem = new QStandardItem(m_AreaList[i]); //创建Item
		aItemList << aItem;   //添加到容器
		aItem = new QStandardItem(m_AreaNumList[i]); //创建Item
		aItemList << aItem;   //添加到容器
		aItem = new QStandardItem(m_DataTypeList[i]); //创建Item
		aItemList << aItem;   //添加到容器
		aItem = new QStandardItem(QString::number(m_DataAddrList[i])); //创建Item
		aItemList << aItem;   //添加到容器
		aItem = new QStandardItem("0"); //创建Item
		aItemList << aItem;   //添加到容器
		theModel->insertRow(theModel->rowCount(), aItemList); //插入一行，需要每个Cell的Item
		QModelIndex curIndex = theModel->index(theModel->rowCount() - 1, 0);//创建最后一行的ModelIndex
		theSelection->clearSelection();
		theSelection->setCurrentIndex(curIndex, QItemSelectionModel::Select);
	}
	
	//QModelIndex curIndex = theModel->index(theModel->rowCount() - 1, 0);//创建最后一行的ModelIndex
	//theSelection->clearSelection();
	//theSelection->setCurrentIndex(curIndex, QItemSelectionModel::Select);
}
void S7SettingDialog::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
	Q_UNUSED(previous);
	if (current.isValid())
	{
		QStandardItem   *aItemCurrent;
		aItemCurrent = theModel->itemFromIndex(current); //从模型索引获得Item
		aItemCurrent->column();
		aItemCurrent->row();
		qDebug() << "row" << aItemCurrent->row() << "column:" << aItemCurrent->column() << "text:" << aItemCurrent->text();
		
	}
	if (previous.isValid())
	{
		QStandardItem   *aItempre;
		aItempre = theModel->itemFromIndex(current); //从模型索引获得Item
		aItempre->column();
		aItempre->row();
		qDebug() << "prerow" << aItempre->row() << "precolumn:" << aItempre->column() << "pretext:" << aItempre->text();

	}
}
S7SettingDialog::~S7SettingDialog()
{


}
void S7SettingDialog::GetAllinfo()
{
	
	m_ip = ui.lineEdit_ip->text();
	m_port = ui.lineEdit_port->text().toShort();
	m_rack = ui.lineEdit_rack->text().toInt();
	m_slot = ui.lineEdit_slot->text().toInt();
	


	m_ip = ui.lineEdit_ip->text();
	QModelIndex nowIndex;
	int rows = theModel->rowCount();
	int cols = theModel->columnCount();
	m_AreaList.clear();
	m_AreaNumList.clear();
	m_DataTypeList.clear();
	m_DataAddrList.clear();
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			nowIndex = theModel->index(row, col);
			if (col == 0)
			{
				m_AreaList.append(theModel->data(nowIndex).toString());
			}
			else if (col == 1)
			{
				m_AreaNumList.append(theModel->data(nowIndex).toString());
			}
			else if (col == 2)
			{

				m_DataTypeList.append(theModel->data(nowIndex).toString());
			}
			else if (col == 3)
			{
				m_DataAddrList.append(theModel->data(nowIndex).toInt());
			}
			else if (col == 4)
			{

			}
		}
	}
}
void S7SettingDialog::on_btn_save()
{
	GetAllinfo();
	
	ConfFile::GetInstance()->SetServerIp(m_ip);
	ConfFile::GetInstance()->SetServerPort(m_port);
	ConfFile::GetInstance()->SetRack(m_rack);
	ConfFile::GetInstance()->SetSlot(m_slot);

	ConfFile::GetInstance()->SetAreaList(m_AreaList);
	ConfFile::GetInstance()->SetDBNumList(m_AreaNumList);
	ConfFile::GetInstance()->SetDataTypeList(m_DataTypeList);
	ConfFile::GetInstance()->SetDataAddrList(m_DataAddrList);

	ConfFile::GetInstance()->WriteConfFile();
	

}
void S7SettingDialog::on_btn_Cancel()
{
	
}
void S7SettingDialog::on_btn_testConnect()
{
	
}
void S7SettingDialog::on_btn_testRead()
{
	
}
void S7SettingDialog::on_add_line()
{
	QList<QStandardItem*>    aItemList; //容器类
	QStandardItem   *aItem;
	QString str;


	aItem = new QStandardItem("DB"); //创建Item
	aItemList << aItem;   //添加到容器
	aItem = new QStandardItem("0"); //创建Item
	aItemList << aItem;   //添加到容器
	aItem = new QStandardItem("DINT"); //创建Item
	aItemList << aItem;   //添加到容器
	aItem = new QStandardItem("0"); //创建Item
	aItemList << aItem;   //添加到容器
	aItem = new QStandardItem("0"); //创建Item
	aItemList << aItem;   //添加到容器


	theModel->insertRow(theModel->rowCount(), aItemList); //插入一行，需要每个Cell的Item
	QModelIndex curIndex = theModel->index(theModel->rowCount() - 1, 0);//创建最后一行的ModelIndex
	theSelection->clearSelection();
	theSelection->setCurrentIndex(curIndex, QItemSelectionModel::Select);
}
void S7SettingDialog::on_del_line()
{
	QModelIndex curIndex = theSelection->currentIndex();
	if (theModel->rowCount() <= 1)
		return;
	if (curIndex.row() == theModel->rowCount() - 1)//(curIndex.isValid())
		theModel->removeRow(curIndex.row());
	else
	{
		theModel->removeRow(curIndex.row());
		theSelection->setCurrentIndex(curIndex, QItemSelectionModel::Select);
	}
}