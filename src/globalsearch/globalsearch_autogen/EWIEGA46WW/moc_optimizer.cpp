/****************************************************************************
** Meta object code from reading C++ file 'optimizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../optimizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optimizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__Optimizer_t {
    QByteArrayData data[14];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__Optimizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__Optimizer_t qt_meta_stringdata_GlobalSearch__Optimizer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GlobalSearch::Optimizer"
QT_MOC_LITERAL(1, 24, 7), // "setData"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "identifier"
QT_MOC_LITERAL(4, 44, 4), // "data"
QT_MOC_LITERAL(5, 49, 18), // "getLocalRunCommand"
QT_MOC_LITERAL(6, 68, 18), // "setLocalRunCommand"
QT_MOC_LITERAL(7, 87, 1), // "s"
QT_MOC_LITERAL(8, 89, 13), // "stdinFilename"
QT_MOC_LITERAL(9, 103, 14), // "stdoutFilename"
QT_MOC_LITERAL(10, 118, 14), // "stderrFilename"
QT_MOC_LITERAL(11, 133, 9), // "hasDialog"
QT_MOC_LITERAL(12, 143, 6), // "dialog"
QT_MOC_LITERAL(13, 150, 8) // "QDialog*"

    },
    "GlobalSearch::Optimizer\0setData\0\0"
    "identifier\0data\0getLocalRunCommand\0"
    "setLocalRunCommand\0s\0stdinFilename\0"
    "stdoutFilename\0stderrFilename\0hasDialog\0"
    "dialog\0QDialog*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__Optimizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       5,    0,   59,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    0x80000000 | 13,

       0        // eod
};

void GlobalSearch::Optimizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Optimizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->setData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getLocalRunCommand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setLocalRunCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->stdinFilename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->stdoutFilename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->stderrFilename();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->hasDialog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDialog* _r = _t->dialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::Optimizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__Optimizer.data,
    qt_meta_data_GlobalSearch__Optimizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::Optimizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::Optimizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__Optimizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::Optimizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
