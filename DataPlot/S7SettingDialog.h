#pragma once

#include <QWidget>
#include "ui_S7SettingDialog.h"
#include<QStandardItemModel>
#include <QItemSelectionModel>
#include"QDBTypeComboBoxDelegate.h"
#include "QDataTypeComboBoxDelegate.h"
class S7SettingDialog : public QWidget
{
	Q_OBJECT

public:
	S7SettingDialog(QWidget *parent = nullptr);
	~S7SettingDialog();

private:
	Ui::S7SettingDialogClass ui;
	
	QStandardItemModel  *theModel;//����ģ��
	QItemSelectionModel *theSelection;//Itemѡ��ģ��
	QDBTypeComboBoxDelegate AreaTypeDelegate;  //����ѡ��
	QDataTypeComboBoxDelegate DataTypeDelegate;  //����ѡ��

private slots:
	void on_btn_save();
	void on_btn_Cancel();
	void on_btn_testConnect();
	void on_btn_testRead();
	void on_add_line();
	void on_del_line();
	void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);

};