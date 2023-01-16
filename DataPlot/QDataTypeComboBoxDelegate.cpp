#include "QDataTypeComboBoxDelegate.h"
#include<qcombobox.h>
QDataTypeComboBoxDelegate::QDataTypeComboBoxDelegate(QObject *parent)
	: QItemDelegate(parent)
{


}

QDataTypeComboBoxDelegate::~QDataTypeComboBoxDelegate()
{}

QWidget *QDataTypeComboBoxDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	QComboBox *editor = new QComboBox(parent);
	editor->addItem("BOOL");
	editor->addItem("SINT");
	editor->addItem("USINT");
	editor->addItem("INT");
	editor->addItem("UINT");
	editor->addItem("DINT");
	editor->addItem("UDINT");
	editor->addItem("ULINT");
	editor->addItem("BYTE");
	editor->addItem("WORD");
	editor->addItem("DWORD");
	editor->addItem("LWORD");
	editor->addItem("REAL");
	editor->addItem("LREAL");
	editor->setCurrentIndex(4);
	return editor;
}

void QDataTypeComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
	QString str = index.model()->data(index, Qt::EditRole).toString();

	QComboBox *comboBox = static_cast<QComboBox*>(editor);
	comboBox->setCurrentText(str);
}

void QDataTypeComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
	QComboBox *comboBox = static_cast<QComboBox*>(editor);

	QString str = comboBox->currentText();

	model->setData(index, str, Qt::EditRole);
}

void QDataTypeComboBoxDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	editor->setGeometry(option.rect);
}
