/****************************************************************************
** Meta object code from reading C++ file 'xtal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../structures/xtal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xtal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XtalOpt__Xtal_t {
    QByteArrayData data[24];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XtalOpt__Xtal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XtalOpt__Xtal_t qt_meta_stringdata_XtalOpt__Xtal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "XtalOpt::Xtal"
QT_MOC_LITERAL(1, 14, 17), // "dimensionsChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "setCellInfo"
QT_MOC_LITERAL(4, 45, 1), // "a"
QT_MOC_LITERAL(5, 47, 1), // "b"
QT_MOC_LITERAL(6, 49, 1), // "c"
QT_MOC_LITERAL(7, 51, 5), // "alpha"
QT_MOC_LITERAL(8, 57, 4), // "beta"
QT_MOC_LITERAL(9, 62, 5), // "gamma"
QT_MOC_LITERAL(10, 68, 7), // "Matrix3"
QT_MOC_LITERAL(11, 76, 1), // "m"
QT_MOC_LITERAL(12, 78, 7), // "Vector3"
QT_MOC_LITERAL(13, 86, 9), // "setVolume"
QT_MOC_LITERAL(14, 96, 6), // "Volume"
QT_MOC_LITERAL(15, 103, 11), // "rescaleCell"
QT_MOC_LITERAL(16, 115, 9), // "fixAngles"
QT_MOC_LITERAL(17, 125, 8), // "attempts"
QT_MOC_LITERAL(18, 134, 15), // "wrapAtomsToCell"
QT_MOC_LITERAL(19, 150, 14), // "findSpaceGroup"
QT_MOC_LITERAL(20, 165, 4), // "prec"
QT_MOC_LITERAL(21, 170, 16), // "printLatticeInfo"
QT_MOC_LITERAL(22, 187, 13), // "printAtomInfo"
QT_MOC_LITERAL(23, 201, 13) // "printXtalInfo"

    },
    "XtalOpt::Xtal\0dimensionsChanged\0\0"
    "setCellInfo\0a\0b\0c\0alpha\0beta\0gamma\0"
    "Matrix3\0m\0Vector3\0setVolume\0Volume\0"
    "rescaleCell\0fixAngles\0attempts\0"
    "wrapAtomsToCell\0findSpaceGroup\0prec\0"
    "printLatticeInfo\0printAtomInfo\0"
    "printXtalInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XtalOpt__Xtal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    6,   85,    2, 0x0a /* Public */,
       3,    1,   98,    2, 0x0a /* Public */,
       3,    3,  101,    2, 0x0a /* Public */,
      13,    1,  108,    2, 0x0a /* Public */,
      15,    6,  111,    2, 0x0a /* Public */,
      16,    1,  124,    2, 0x0a /* Public */,
      16,    0,  127,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  128,    2, 0x0a /* Public */,
      19,    1,  129,    2, 0x0a /* Public */,
      19,    0,  132,    2, 0x2a /* Public | MethodCloned */,
      21,    0,  133,    2, 0x0a /* Public */,
      22,    0,  134,    2, 0x0a /* Public */,
      23,    0,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,    4,    5,    6,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,
    QMetaType::Bool, QMetaType::Int,   17,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XtalOpt::Xtal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Xtal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dimensionsChanged(); break;
        case 1: _t->setCellInfo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 2: _t->setCellInfo((*reinterpret_cast< const Matrix3(*)>(_a[1]))); break;
        case 3: _t->setCellInfo((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< const Vector3(*)>(_a[2])),(*reinterpret_cast< const Vector3(*)>(_a[3]))); break;
        case 4: _t->setVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->rescaleCell((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 6: { bool _r = _t->fixAngles((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->fixAngles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->wrapAtomsToCell(); break;
        case 9: _t->findSpaceGroup((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->findSpaceGroup(); break;
        case 11: _t->printLatticeInfo(); break;
        case 12: _t->printAtomInfo(); break;
        case 13: _t->printXtalInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Xtal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Xtal::dimensionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XtalOpt::Xtal::staticMetaObject = { {
    QMetaObject::SuperData::link<GlobalSearch::Structure::staticMetaObject>(),
    qt_meta_stringdata_XtalOpt__Xtal.data,
    qt_meta_data_XtalOpt__Xtal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XtalOpt::Xtal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XtalOpt::Xtal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__Xtal.stringdata0))
        return static_cast<void*>(this);
    return GlobalSearch::Structure::qt_metacast(_clname);
}

int XtalOpt::Xtal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalSearch::Structure::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void XtalOpt::Xtal::dimensionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
