/****************************************************************************
** Meta object code from reading C++ file 'complex.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../complex.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'complex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Complex_t {
    QByteArrayData data[12];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Complex_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Complex_t qt_meta_stringdata_Complex = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Complex"
QT_MOC_LITERAL(1, 8, 36), // "on_input_a_combo_currentIndex..."
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "index"
QT_MOC_LITERAL(4, 52, 36), // "on_input_b_combo_currentIndex..."
QT_MOC_LITERAL(5, 89, 21), // "on_equal_push_pressed"
QT_MOC_LITERAL(6, 111, 37), // "on_operator_combo_currentInde..."
QT_MOC_LITERAL(7, 149, 23), // "on_input_a1_textChanged"
QT_MOC_LITERAL(8, 173, 4), // "arg1"
QT_MOC_LITERAL(9, 178, 23), // "on_input_a2_textChanged"
QT_MOC_LITERAL(10, 202, 23), // "on_input_b1_textChanged"
QT_MOC_LITERAL(11, 226, 23) // "on_input_b2_textChanged"

    },
    "Complex\0on_input_a_combo_currentIndexChanged\0"
    "\0index\0on_input_b_combo_currentIndexChanged\0"
    "on_equal_push_pressed\0"
    "on_operator_combo_currentIndexChanged\0"
    "on_input_a1_textChanged\0arg1\0"
    "on_input_a2_textChanged\0on_input_b1_textChanged\0"
    "on_input_b2_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Complex[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    0,   60,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void Complex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Complex *_t = static_cast<Complex *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_input_a_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_input_b_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_equal_push_pressed(); break;
        case 3: _t->on_operator_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_input_a1_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_input_a2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_input_b1_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_input_b2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Complex::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Complex.data,
      qt_meta_data_Complex,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Complex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Complex::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Complex.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Complex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
