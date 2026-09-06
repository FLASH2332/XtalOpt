/****************************************************************************
** Meta object code from reading C++ file 'tab_opt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ui/tab_opt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_opt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XtalOpt__TabOpt_t {
    QByteArrayData data[15];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XtalOpt__TabOpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XtalOpt__TabOpt_t qt_meta_stringdata_XtalOpt__TabOpt = {
    {
QT_MOC_LITERAL(0, 0, 15), // "XtalOpt::TabOpt"
QT_MOC_LITERAL(1, 16, 12), // "readSettings"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "filename"
QT_MOC_LITERAL(4, 39, 13), // "writeSettings"
QT_MOC_LITERAL(5, 53, 10), // "loadScheme"
QT_MOC_LITERAL(6, 64, 16), // "updateEditWidget"
QT_MOC_LITERAL(7, 81, 13), // "appendOptStep"
QT_MOC_LITERAL(8, 95, 20), // "removeCurrentOptStep"
QT_MOC_LITERAL(9, 116, 24), // "generateVASP_POTCAR_info"
QT_MOC_LITERAL(10, 141, 23), // "generateSIESTA_PSF_info"
QT_MOC_LITERAL(11, 165, 12), // "changePOTCAR"
QT_MOC_LITERAL(12, 178, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 195, 4), // "item"
QT_MOC_LITERAL(14, 200, 9) // "changePSF"

    },
    "XtalOpt::TabOpt\0readSettings\0\0filename\0"
    "writeSettings\0loadScheme\0updateEditWidget\0"
    "appendOptStep\0removeCurrentOptStep\0"
    "generateVASP_POTCAR_info\0"
    "generateSIESTA_PSF_info\0changePOTCAR\0"
    "QListWidgetItem*\0item\0changePSF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XtalOpt__TabOpt[] = {

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
       1,    1,   74,    2, 0x0a /* Public */,
       1,    0,   77,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   78,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x2a /* Public | MethodCloned */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x09 /* Protected */,
      10,    0,   87,    2, 0x09 /* Protected */,
      11,    1,   88,    2, 0x09 /* Protected */,
      14,    1,   91,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void XtalOpt::TabOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabOpt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readSettings(); break;
        case 2: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings(); break;
        case 4: _t->loadScheme(); break;
        case 5: _t->updateEditWidget(); break;
        case 6: _t->appendOptStep(); break;
        case 7: _t->removeCurrentOptStep(); break;
        case 8: { bool _r = _t->generateVASP_POTCAR_info();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->generateSIESTA_PSF_info();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->changePOTCAR((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->changePSF((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XtalOpt::TabOpt::staticMetaObject = { {
    QMetaObject::SuperData::link<GlobalSearch::DefaultOptTab::staticMetaObject>(),
    qt_meta_stringdata_XtalOpt__TabOpt.data,
    qt_meta_data_XtalOpt__TabOpt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XtalOpt::TabOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XtalOpt::TabOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabOpt.stringdata0))
        return static_cast<void*>(this);
    return GlobalSearch::DefaultOptTab::qt_metacast(_clname);
}

int XtalOpt::TabOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalSearch::DefaultOptTab::qt_metacall(_c, _id, _a);
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
