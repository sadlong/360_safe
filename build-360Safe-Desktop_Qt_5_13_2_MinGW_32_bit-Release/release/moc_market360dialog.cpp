/****************************************************************************
** Meta object code from reading C++ file 'market360dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_360_safe/dialog/market360dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'market360dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Market360Dialog_t {
    QByteArrayData data[8];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Market360Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Market360Dialog_t qt_meta_stringdata_Market360Dialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Market360Dialog"
QT_MOC_LITERAL(1, 16, 16), // "on_close_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(4, 56, 23), // "on_toolButton_2_clicked"
QT_MOC_LITERAL(5, 80, 23), // "on_toolButton_3_clicked"
QT_MOC_LITERAL(6, 104, 23), // "on_toolButton_4_clicked"
QT_MOC_LITERAL(7, 128, 23) // "on_toolButton_5_clicked"

    },
    "Market360Dialog\0on_close_clicked\0\0"
    "on_toolButton_clicked\0on_toolButton_2_clicked\0"
    "on_toolButton_3_clicked\0on_toolButton_4_clicked\0"
    "on_toolButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Market360Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Market360Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Market360Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_toolButton_clicked(); break;
        case 2: _t->on_toolButton_2_clicked(); break;
        case 3: _t->on_toolButton_3_clicked(); break;
        case 4: _t->on_toolButton_4_clicked(); break;
        case 5: _t->on_toolButton_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Market360Dialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Market360Dialog.data,
    qt_meta_data_Market360Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Market360Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Market360Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Market360Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Market360Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
