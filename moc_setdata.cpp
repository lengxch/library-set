/****************************************************************************
** Meta object code from reading C++ file 'setdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../library1-0/setdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_setData_t {
    QByteArrayData data[9];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_setData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_setData_t qt_meta_stringdata_setData = {
    {
QT_MOC_LITERAL(0, 0, 7), // "setData"
QT_MOC_LITERAL(1, 8, 24), // "on_ReturnToMain3_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "time_update"
QT_MOC_LITERAL(4, 46, 33), // "on_select_time_currentTextCha..."
QT_MOC_LITERAL(5, 80, 17), // "on_submit_clicked"
QT_MOC_LITERAL(6, 98, 32), // "on_select_set_currentTextChanged"
QT_MOC_LITERAL(7, 131, 13), // "StringExtract"
QT_MOC_LITERAL(8, 145, 4) // "str1"

    },
    "setData\0on_ReturnToMain3_clicked\0\0"
    "time_update\0on_select_time_currentTextChanged\0"
    "on_submit_clicked\0on_select_set_currentTextChanged\0"
    "StringExtract\0str1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_setData[] = {

 // content:
       7,       // revision
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
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    8,

       0        // eod
};

void setData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        setData *_t = static_cast<setData *>(_o);
        switch (_id) {
        case 0: _t->on_ReturnToMain3_clicked(); break;
        case 1: _t->time_update(); break;
        case 2: _t->on_select_time_currentTextChanged(); break;
        case 3: _t->on_submit_clicked(); break;
        case 4: _t->on_select_set_currentTextChanged(); break;
        case 5: { QString _r = _t->StringExtract((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject setData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setData.data,
      qt_meta_data_setData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *setData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *setData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_setData.stringdata))
        return static_cast<void*>(const_cast< setData*>(this));
    return QDialog::qt_metacast(_clname);
}

int setData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
