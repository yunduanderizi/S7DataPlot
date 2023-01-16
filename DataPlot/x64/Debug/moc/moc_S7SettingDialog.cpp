/****************************************************************************
** Meta object code from reading C++ file 'S7SettingDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../S7SettingDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'S7SettingDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_S7SettingDialog_t {
    QByteArrayData data[12];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_S7SettingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_S7SettingDialog_t qt_meta_stringdata_S7SettingDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "S7SettingDialog"
QT_MOC_LITERAL(1, 16, 11), // "on_btn_save"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "on_btn_Cancel"
QT_MOC_LITERAL(4, 43, 18), // "on_btn_testConnect"
QT_MOC_LITERAL(5, 62, 15), // "on_btn_testRead"
QT_MOC_LITERAL(6, 78, 11), // "on_add_line"
QT_MOC_LITERAL(7, 90, 11), // "on_del_line"
QT_MOC_LITERAL(8, 102, 17), // "on_currentChanged"
QT_MOC_LITERAL(9, 120, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 132, 7), // "current"
QT_MOC_LITERAL(11, 140, 8) // "previous"

    },
    "S7SettingDialog\0on_btn_save\0\0on_btn_Cancel\0"
    "on_btn_testConnect\0on_btn_testRead\0"
    "on_add_line\0on_del_line\0on_currentChanged\0"
    "QModelIndex\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_S7SettingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,

       0        // eod
};

void S7SettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<S7SettingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_save(); break;
        case 1: _t->on_btn_Cancel(); break;
        case 2: _t->on_btn_testConnect(); break;
        case 3: _t->on_btn_testRead(); break;
        case 4: _t->on_add_line(); break;
        case 5: _t->on_del_line(); break;
        case 6: _t->on_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject S7SettingDialog::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_S7SettingDialog.data,
    qt_meta_data_S7SettingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *S7SettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *S7SettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_S7SettingDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int S7SettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
