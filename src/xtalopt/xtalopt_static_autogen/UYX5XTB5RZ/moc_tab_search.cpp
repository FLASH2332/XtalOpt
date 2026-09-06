/****************************************************************************
** Meta object code from reading C++ file 'tab_search.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ui/tab_search.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_search.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XtalOpt__TabSearch_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XtalOpt__TabSearch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XtalOpt__TabSearch_t qt_meta_stringdata_XtalOpt__TabSearch = {
    {
QT_MOC_LITERAL(0, 0, 18), // "XtalOpt::TabSearch"
QT_MOC_LITERAL(1, 19, 7), // "lockGUI"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "readSettings"
QT_MOC_LITERAL(4, 41, 8), // "filename"
QT_MOC_LITERAL(5, 50, 13), // "writeSettings"
QT_MOC_LITERAL(6, 64, 9), // "updateGUI"
QT_MOC_LITERAL(7, 74, 22), // "updateOptimizationInfo"
QT_MOC_LITERAL(8, 97, 7), // "addSeed"
QT_MOC_LITERAL(9, 105, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 122, 4), // "item"
QT_MOC_LITERAL(11, 127, 10), // "removeSeed"
QT_MOC_LITERAL(12, 138, 9), // "showSeeds"
QT_MOC_LITERAL(13, 148, 11) // "updateSeeds"

    },
    "XtalOpt::TabSearch\0lockGUI\0\0readSettings\0"
    "filename\0writeSettings\0updateGUI\0"
    "updateOptimizationInfo\0addSeed\0"
    "QListWidgetItem*\0item\0removeSeed\0"
    "showSeeds\0updateSeeds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XtalOpt__TabSearch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       3,    0,   78,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   79,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    1,   85,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XtalOpt::TabSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabSearch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lockGUI(); break;
        case 1: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeSettings(); break;
        case 5: _t->updateGUI(); break;
        case 6: _t->updateOptimizationInfo(); break;
        case 7: _t->addSeed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->addSeed(); break;
        case 9: _t->removeSeed(); break;
        case 10: _t->showSeeds(); break;
        case 11: _t->updateSeeds(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XtalOpt::TabSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<GlobalSearch::AbstractTab::staticMetaObject>(),
    qt_meta_stringdata_XtalOpt__TabSearch.data,
    qt_meta_data_XtalOpt__TabSearch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XtalOpt::TabSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XtalOpt::TabSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabSearch.stringdata0))
        return static_cast<void*>(this);
    return GlobalSearch::AbstractTab::qt_metacast(_clname);
}

int XtalOpt::TabSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalSearch::AbstractTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
