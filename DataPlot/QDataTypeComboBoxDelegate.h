#pragma once

#include <QItemDelegate>

class QDataTypeComboBoxDelegate  : public QItemDelegate
{
	Q_OBJECT

public:
	QDataTypeComboBoxDelegate(QObject *parent=0);
	~QDataTypeComboBoxDelegate();


	//自定义代理组件必须继承以下4个函数
	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
	void setModelData(QWidget *editor, QAbstractItemModel *model,
		const QModelIndex &index) const Q_DECL_OVERRIDE;
	void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;
};



