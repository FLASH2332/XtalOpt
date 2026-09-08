/****************************************************************************
** Meta object code from reading C++ file 'lsf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../queueinterfaces/lsf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lsf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__LsfQueueInterface_t {
    QByteArrayData data[11];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__LsfQueueInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__LsfQueueInterface_t qt_meta_stringdata_GlobalSearch__LsfQueueInterface = {
    {
QT_MOC_LITERAL(0, 0, 31), // "GlobalSearch::LsfQueueInterface"
QT_MOC_LITERAL(1, 32, 12), // "readSettings"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "filename"
QT_MOC_LITERAL(4, 55, 13), // "writeSettings"
QT_MOC_LITERAL(5, 69, 8), // "startJob"
QT_MOC_LITERAL(6, 78, 10), // "Structure*"
QT_MOC_LITERAL(7, 89, 1), // "s"
QT_MOC_LITERAL(8, 91, 7), // "stopJob"
QT_MOC_LITERAL(9, 99, 9), // "getStatus"
QT_MOC_LITERAL(10, 109, 27) // "QueueInterface::QueueStatus"

    },
    "GlobalSearch::LsfQueueInterface\0"
    "readSettings\0\0filename\0writeSettings\0"
    "startJob\0Structure*\0s\0stopJob\0getStatus\0"
    "QueueInterface::QueueStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__LsfQueueInterface[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       1,    0,   52,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   53,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 6,    7,
    QMetaType::Bool, 0x80000000 | 6,    7,
    0x80000000 | 10, 0x80000000 | 6,    7,

       0        // eod
};

void GlobalSearch::LsfQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LsfQueueInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readSettings(); break;
        case 2: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings(); break;
        case 4: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::LsfQueueInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<RemoteQueueInterface::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__LsfQueueInterface.data,
    qt_meta_data_GlobalSearch__LsfQueueInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::LsfQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::LsfQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LsfQueueInterface.stringdata0))
        return static_cast<void*>(this);
    return RemoteQueueInterface::qt_metacast(_clname);
}

int GlobalSearch::LsfQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteQueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
