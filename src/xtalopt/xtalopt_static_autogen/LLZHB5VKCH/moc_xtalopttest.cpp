/****************************************************************************
** Meta object code from reading C++ file 'xtalopttest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../testing/xtalopttest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xtalopttest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XtalOpt__XtalOptTest_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XtalOpt__XtalOptTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XtalOpt__XtalOptTest_t qt_meta_stringdata_XtalOpt__XtalOptTest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "XtalOpt::XtalOptTest"
QT_MOC_LITERAL(1, 21, 12), // "testStarting"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "newMessage"
QT_MOC_LITERAL(4, 46, 6), // "status"
QT_MOC_LITERAL(5, 53, 24), // "sig_updateProgressDialog"
QT_MOC_LITERAL(6, 78, 13), // "updateMessage"
QT_MOC_LITERAL(7, 92, 12), // "updateStatus"
QT_MOC_LITERAL(8, 105, 20), // "updateProgressDialog"
QT_MOC_LITERAL(9, 126, 12) // "outputStatus"

    },
    "XtalOpt::XtalOptTest\0testStarting\0\0"
    "newMessage\0status\0sig_updateProgressDialog\0"
    "updateMessage\0updateStatus\0"
    "updateProgressDialog\0outputStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XtalOpt__XtalOptTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       4,    0,   58,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x0a /* Public */,
       7,    0,   63,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x0a /* Public */,
       9,    7,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,

       0        // eod
};

void XtalOpt::XtalOptTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XtalOptTest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testStarting(); break;
        case 1: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->status(); break;
        case 3: _t->sig_updateProgressDialog(); break;
        case 4: _t->updateMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateStatus(); break;
        case 6: _t->updateProgressDialog(); break;
        case 7: _t->outputStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XtalOptTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XtalOptTest::testStarting)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XtalOptTest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XtalOptTest::newMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XtalOptTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XtalOptTest::status)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XtalOptTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XtalOptTest::sig_updateProgressDialog)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XtalOpt::XtalOptTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_XtalOpt__XtalOptTest.data,
    qt_meta_data_XtalOpt__XtalOptTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XtalOpt::XtalOptTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XtalOpt::XtalOptTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__XtalOptTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XtalOpt::XtalOptTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void XtalOpt::XtalOptTest::testStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XtalOpt::XtalOptTest::newMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XtalOpt::XtalOptTest::status()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void XtalOpt::XtalOptTest::sig_updateProgressDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
