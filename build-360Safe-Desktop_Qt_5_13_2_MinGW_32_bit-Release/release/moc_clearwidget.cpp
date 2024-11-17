/****************************************************************************
** Meta object code from reading C++ file 'clearwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_360_safe/widget/clearwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clearwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClearWidget_t {
    QByteArrayData data[12];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClearWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClearWidget_t qt_meta_stringdata_ClearWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClearWidget"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "onClear2IntoNextSlot"
QT_MOC_LITERAL(4, 56, 26), // "onHoverToolButtonHoverSlot"
QT_MOC_LITERAL(5, 83, 16), // "HoverToolButton*"
QT_MOC_LITERAL(6, 100, 2), // "pb"
QT_MOC_LITERAL(7, 103, 28), // "onHoverToolButtonNoHoverSlot"
QT_MOC_LITERAL(8, 132, 27), // "onMouseEnterPopupWidgetSlot"
QT_MOC_LITERAL(9, 160, 12), // "PopupWidget*"
QT_MOC_LITERAL(10, 173, 6), // "widget"
QT_MOC_LITERAL(11, 180, 27) // "onMouseLeavePopupWidgetSlot"

    },
    "ClearWidget\0on_pushButton_clicked\0\0"
    "onClear2IntoNextSlot\0onHoverToolButtonHoverSlot\0"
    "HoverToolButton*\0pb\0onHoverToolButtonNoHoverSlot\0"
    "onMouseEnterPopupWidgetSlot\0PopupWidget*\0"
    "widget\0onMouseLeavePopupWidgetSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClearWidget[] = {

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
       4,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void ClearWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClearWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->onClear2IntoNextSlot(); break;
        case 2: _t->onHoverToolButtonHoverSlot((*reinterpret_cast< HoverToolButton*(*)>(_a[1]))); break;
        case 3: _t->onHoverToolButtonNoHoverSlot((*reinterpret_cast< HoverToolButton*(*)>(_a[1]))); break;
        case 4: _t->onMouseEnterPopupWidgetSlot((*reinterpret_cast< PopupWidget*(*)>(_a[1]))); break;
        case 5: _t->onMouseLeavePopupWidgetSlot((*reinterpret_cast< PopupWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HoverToolButton* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HoverToolButton* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PopupWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PopupWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClearWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ClearWidget.data,
    qt_meta_data_ClearWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClearWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClearWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClearWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClearWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
