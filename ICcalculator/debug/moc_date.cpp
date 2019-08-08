/****************************************************************************
** Meta object code from reading C++ file 'date.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../date.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'date.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Date_t {
    QByteArrayData data[14];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Date_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Date_t qt_meta_stringdata_Date = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Date"
QT_MOC_LITERAL(1, 5, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "arg1"
QT_MOC_LITERAL(4, 43, 25), // "on_dateEdit_2_dateChanged"
QT_MOC_LITERAL(5, 69, 4), // "date"
QT_MOC_LITERAL(6, 74, 23), // "on_dateEdit_dateChanged"
QT_MOC_LITERAL(7, 98, 26), // "on_radioButton_sub_clicked"
QT_MOC_LITERAL(8, 125, 7), // "checked"
QT_MOC_LITERAL(9, 133, 26), // "on_radioButton_add_clicked"
QT_MOC_LITERAL(10, 160, 25), // "on_dateEdit_3_dateChanged"
QT_MOC_LITERAL(11, 186, 28), // "on_spinBox_year_valueChanged"
QT_MOC_LITERAL(12, 215, 29), // "on_spinBox_month_valueChanged"
QT_MOC_LITERAL(13, 245, 27) // "on_spinBox_day_valueChanged"

    },
    "Date\0on_comboBox_currentIndexChanged\0"
    "\0arg1\0on_dateEdit_2_dateChanged\0date\0"
    "on_dateEdit_dateChanged\0"
    "on_radioButton_sub_clicked\0checked\0"
    "on_radioButton_add_clicked\0"
    "on_dateEdit_3_dateChanged\0"
    "on_spinBox_year_valueChanged\0"
    "on_spinBox_month_valueChanged\0"
    "on_spinBox_day_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Date[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Date::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Date *_t = static_cast<Date *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_dateEdit_2_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->on_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->on_radioButton_sub_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioButton_add_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_dateEdit_3_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 6: _t->on_spinBox_year_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBox_month_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinBox_day_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Date::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Date.data,
      qt_meta_data_Date,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Date::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Date::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Date.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Date::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
