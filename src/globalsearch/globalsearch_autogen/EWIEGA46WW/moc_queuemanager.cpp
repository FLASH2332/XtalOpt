/****************************************************************************
** Meta object code from reading C++ file 'queuemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../queuemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queuemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__QueueManager_t {
    QByteArrayData data[36];
    char stringdata0[610];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__QueueManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__QueueManager_t qt_meta_stringdata_GlobalSearch__QueueManager = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GlobalSearch::QueueManager"
QT_MOC_LITERAL(1, 27, 29), // "readyForObjectiveCalculations"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 24), // "GlobalSearch::Structure*"
QT_MOC_LITERAL(4, 83, 1), // "s"
QT_MOC_LITERAL(5, 85, 15), // "movedToQMThread"
QT_MOC_LITERAL(6, 101, 16), // "structureStarted"
QT_MOC_LITERAL(7, 118, 18), // "structureSubmitted"
QT_MOC_LITERAL(8, 137, 15), // "structureKilled"
QT_MOC_LITERAL(9, 153, 16), // "structureUpdated"
QT_MOC_LITERAL(10, 170, 17), // "structureFinished"
QT_MOC_LITERAL(11, 188, 23), // "hullCalculationFinished"
QT_MOC_LITERAL(12, 212, 16), // "needNewStructure"
QT_MOC_LITERAL(13, 229, 17), // "newStatusOverview"
QT_MOC_LITERAL(14, 247, 9), // "optimized"
QT_MOC_LITERAL(15, 257, 7), // "running"
QT_MOC_LITERAL(16, 265, 7), // "failing"
QT_MOC_LITERAL(17, 273, 5), // "total"
QT_MOC_LITERAL(18, 279, 5), // "reset"
QT_MOC_LITERAL(19, 285, 13), // "killStructure"
QT_MOC_LITERAL(20, 299, 10), // "Structure*"
QT_MOC_LITERAL(21, 310, 23), // "appendToJobStartTracker"
QT_MOC_LITERAL(22, 334, 23), // "getAllRunningStructures"
QT_MOC_LITERAL(23, 358, 17), // "QList<Structure*>"
QT_MOC_LITERAL(24, 376, 25), // "getAllOptimizedStructures"
QT_MOC_LITERAL(25, 402, 26), // "getAllParentPoolStructures"
QT_MOC_LITERAL(26, 429, 23), // "getAllSimilarStructures"
QT_MOC_LITERAL(27, 453, 16), // "getAllStructures"
QT_MOC_LITERAL(28, 470, 13), // "lockForNaming"
QT_MOC_LITERAL(29, 484, 15), // "unlockForNaming"
QT_MOC_LITERAL(30, 500, 29), // "updateStructureObjectiveState"
QT_MOC_LITERAL(31, 530, 9), // "checkLoop"
QT_MOC_LITERAL(32, 540, 29), // "addStructureToSubmissionQueue"
QT_MOC_LITERAL(33, 570, 7), // "optStep"
QT_MOC_LITERAL(34, 578, 14), // "moveToQMThread"
QT_MOC_LITERAL(35, 593, 16) // "setupConnections"

    },
    "GlobalSearch::QueueManager\0"
    "readyForObjectiveCalculations\0\0"
    "GlobalSearch::Structure*\0s\0movedToQMThread\0"
    "structureStarted\0structureSubmitted\0"
    "structureKilled\0structureUpdated\0"
    "structureFinished\0hullCalculationFinished\0"
    "needNewStructure\0newStatusOverview\0"
    "optimized\0running\0failing\0total\0reset\0"
    "killStructure\0Structure*\0"
    "appendToJobStartTracker\0getAllRunningStructures\0"
    "QList<Structure*>\0getAllOptimizedStructures\0"
    "getAllParentPoolStructures\0"
    "getAllSimilarStructures\0getAllStructures\0"
    "lockForNaming\0unlockForNaming\0"
    "updateStructureObjectiveState\0checkLoop\0"
    "addStructureToSubmissionQueue\0optStep\0"
    "moveToQMThread\0setupConnections"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__QueueManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       5,    0,  152,    2, 0x06 /* Public */,
       6,    1,  153,    2, 0x06 /* Public */,
       7,    1,  156,    2, 0x06 /* Public */,
       8,    1,  159,    2, 0x06 /* Public */,
       9,    1,  162,    2, 0x06 /* Public */,
      10,    1,  165,    2, 0x06 /* Public */,
      11,    0,  168,    2, 0x06 /* Public */,
      12,    0,  169,    2, 0x06 /* Public */,
      13,    4,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  179,    2, 0x0a /* Public */,
      19,    1,  180,    2, 0x0a /* Public */,
      21,    1,  183,    2, 0x0a /* Public */,
      22,    0,  186,    2, 0x0a /* Public */,
      24,    0,  187,    2, 0x0a /* Public */,
      25,    0,  188,    2, 0x0a /* Public */,
      26,    0,  189,    2, 0x0a /* Public */,
      27,    0,  190,    2, 0x0a /* Public */,
      28,    0,  191,    2, 0x0a /* Public */,
      29,    1,  192,    2, 0x0a /* Public */,
      29,    0,  195,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  196,    2, 0x09 /* Protected */,
      31,    0,  199,    2, 0x09 /* Protected */,
      32,    2,  200,    2, 0x09 /* Protected */,
      32,    1,  205,    2, 0x09 /* Protected */,
      34,    0,  208,    2, 0x09 /* Protected */,
      35,    0,  209,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    4,
    QMetaType::Void, 0x80000000 | 20,    4,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23,
    QMetaType::Void, 0x80000000 | 20,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   33,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GlobalSearch::QueueManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QueueManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readyForObjectiveCalculations((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 1: _t->movedToQMThread(); break;
        case 2: _t->structureStarted((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 3: _t->structureSubmitted((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 4: _t->structureKilled((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 5: _t->structureUpdated((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 6: _t->structureFinished((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 7: _t->hullCalculationFinished(); break;
        case 8: _t->needNewStructure(); break;
        case 9: _t->newStatusOverview((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->reset(); break;
        case 11: _t->killStructure((*reinterpret_cast< Structure*(*)>(_a[1]))); break;
        case 12: _t->appendToJobStartTracker((*reinterpret_cast< Structure*(*)>(_a[1]))); break;
        case 13: { QList<Structure*> _r = _t->getAllRunningStructures();
            if (_a[0]) *reinterpret_cast< QList<Structure*>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QList<Structure*> _r = _t->getAllOptimizedStructures();
            if (_a[0]) *reinterpret_cast< QList<Structure*>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QList<Structure*> _r = _t->getAllParentPoolStructures();
            if (_a[0]) *reinterpret_cast< QList<Structure*>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QList<Structure*> _r = _t->getAllSimilarStructures();
            if (_a[0]) *reinterpret_cast< QList<Structure*>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QList<Structure*> _r = _t->getAllStructures();
            if (_a[0]) *reinterpret_cast< QList<Structure*>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QList<Structure*> _r = _t->lockForNaming();
            if (_a[0]) *reinterpret_cast< QList<Structure*>*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->unlockForNaming((*reinterpret_cast< Structure*(*)>(_a[1]))); break;
        case 20: _t->unlockForNaming(); break;
        case 21: _t->updateStructureObjectiveState((*reinterpret_cast< Structure*(*)>(_a[1]))); break;
        case 22: _t->checkLoop(); break;
        case 23: _t->addStructureToSubmissionQueue((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->addStructureToSubmissionQueue((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 25: _t->moveToQMThread(); break;
        case 26: _t->setupConnections(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QueueManager::*)(GlobalSearch::Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::readyForObjectiveCalculations)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::movedToQMThread)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)(GlobalSearch::Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::structureStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)(GlobalSearch::Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::structureSubmitted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)(GlobalSearch::Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::structureKilled)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)(GlobalSearch::Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::structureUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)(GlobalSearch::Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::structureFinished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::hullCalculationFinished)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::needNewStructure)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QueueManager::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueueManager::newStatusOverview)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::QueueManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__QueueManager.data,
    qt_meta_data_GlobalSearch__QueueManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::QueueManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::QueueManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__QueueManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::QueueManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void GlobalSearch::QueueManager::readyForObjectiveCalculations(GlobalSearch::Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalSearch::QueueManager::movedToQMThread()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GlobalSearch::QueueManager::structureStarted(GlobalSearch::Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GlobalSearch::QueueManager::structureSubmitted(GlobalSearch::Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GlobalSearch::QueueManager::structureKilled(GlobalSearch::Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GlobalSearch::QueueManager::structureUpdated(GlobalSearch::Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GlobalSearch::QueueManager::structureFinished(GlobalSearch::Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GlobalSearch::QueueManager::hullCalculationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GlobalSearch::QueueManager::needNewStructure()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void GlobalSearch::QueueManager::newStatusOverview(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
