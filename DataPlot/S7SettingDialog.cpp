#include "S7SettingDialog.h"
#include<qdebug.h>
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
	connect(ui.pushButton_delLine, SIGNAL(clicked()), this, SLOT(on_btn_testRead()));
	
	theModel = new QStandardItemModel(10, fixColum, this); //��������ģ��
	theSelection = new QItemSelectionModel(theModel);//Itemѡ��ģ��

	theModel->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("Area")));
	theModel->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("AreaNum")));
	theModel->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("DataType")));
	theModel->setHorizontalHeaderItem(3, new QStandardItem(QObject::tr("Addr")));
	theModel->setHorizontalHeaderItem(4, new QStandardItem(QObject::tr("Data")));
	connect(theSelection, SIGNAL(currentChanged(QModelIndex, QModelIndex)),
		this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));	
	ui.tableView->setModel(theModel);
	ui.tableView->setSelectionModel(theSelection);//����ѡ��ģ��
	ui.tableView->setItemDelegateForColumn(0, &AreaTypeDelegate);  
	ui.tableView->setItemDelegateForColumn(2, &DataTypeDelegate);  
	

}
void S7SettingDialog::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
	Q_UNUSED(previous);
	if (current.isValid())
	{
		QStandardItem   *aItemCurrent;
		aItemCurrent = theModel->itemFromIndex(current); //��ģ���������Item
		aItemCurrent->column();
		aItemCurrent->row();
		qDebug() << "row" << aItemCurrent->row() << "column:" << aItemCurrent->column() << "text:" << aItemCurrent->text();
		
	}
	if (previous.isValid())
	{
		QStandardItem   *aItempre;
		aItempre = theModel->itemFromIndex(current); //��ģ���������Item
		aItempre->column();
		aItempre->row();
		qDebug() << "prerow" << aItempre->row() << "precolumn:" << aItempre->column() << "pretext:" << aItempre->text();

	}
}
S7SettingDialog::~S7SettingDialog()
{


}

void S7SettingDialog::on_btn_save()
{
	
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
	QList<QStandardItem*>    aItemList; //������
	QStandardItem   *aItem;
	QString str;


	aItem = new QStandardItem("DB"); //����Item
	aItemList << aItem;   //���ӵ�����
	aItem = new QStandardItem("0"); //����Item
	aItemList << aItem;   //���ӵ�����
	aItem = new QStandardItem("DINT"); //����Item
	aItemList << aItem;   //���ӵ�����
	aItem = new QStandardItem("0"); //����Item
	aItemList << aItem;   //���ӵ�����
	aItem = new QStandardItem("0"); //����Item
	aItemList << aItem;   //���ӵ�����


	theModel->insertRow(theModel->rowCount(), aItemList); //����һ�У���Ҫÿ��Cell��Item
	QModelIndex curIndex = theModel->index(theModel->rowCount() - 1, 0);//�������һ�е�ModelIndex
	theSelection->clearSelection();
	theSelection->setCurrentIndex(curIndex, QItemSelectionModel::Select);
}
void S7SettingDialog::on_del_line()
{
	QModelIndex curIndex = theSelection->currentIndex();
	if (curIndex.row() == theModel->rowCount() - 1)//(curIndex.isValid())
		theModel->removeRow(curIndex.row());
	else
	{
		theModel->removeRow(curIndex.row());
		theSelection->setCurrentIndex(curIndex, QItemSelectionModel::Select);
	}
}