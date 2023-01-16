#include "QDBTypeComboBoxDelegate.h"
#include<qcombobox.h>
QDBTypeComboBoxDelegate::QDBTypeComboBoxDelegate(QObject *parent)
	: QItemDelegate(parent)
{

}

QDBTypeComboBoxDelegate::~QDBTypeComboBoxDelegate()
{

}
QWidget *QDBTypeComboBoxDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	QComboBox *editor = new QComboBox(parent);
	editor->addItem("DB");
	editor->addItem("IN");
	editor->addItem("OUT");
	editor->addItem("M");
	editor->setCurrentIndex(0);
	return editor;
}

void QDBTypeComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
	QString str = index.model()->data(index, Qt::EditRole).toString();

	QComboBox *comboBox = static_cast<QComboBox*>(editor);
	comboBox->setCurrentText(str);
}

void QDBTypeComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
	QComboBox *comboBox = static_cast<QComboBox*>(editor);

	QString str = comboBox->currentText();

	model->setData(index, str, Qt::EditRole);
}

void QDBTypeComboBoxDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	editor->setGeometry(option.rect);
}
