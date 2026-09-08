/****************************************************************************
** Meta object code from reading C++ file 'remote.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../queueinterfaces/remote.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remote.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__RemoteQueueInterface_t {
    QByteArrayData data[37];
    char stringdata0[425];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__RemoteQueueInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__RemoteQueueInterface_t qt_meta_stringdata_GlobalSearch__RemoteQueueInterface = {
    {
QT_MOC_LITERAL(0, 0, 34), // "GlobalSearch::RemoteQueueInte..."
QT_MOC_LITERAL(1, 35, 10), // "writeFiles"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "Structure*"
QT_MOC_LITERAL(4, 58, 1), // "s"
QT_MOC_LITERAL(5, 60, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(6, 83, 5), // "files"
QT_MOC_LITERAL(7, 89, 8), // "startJob"
QT_MOC_LITERAL(8, 98, 7), // "stopJob"
QT_MOC_LITERAL(9, 106, 9), // "getStatus"
QT_MOC_LITERAL(10, 116, 27), // "QueueInterface::QueueStatus"
QT_MOC_LITERAL(11, 144, 25), // "prepareForStructureUpdate"
QT_MOC_LITERAL(12, 170, 11), // "runACommand"
QT_MOC_LITERAL(13, 182, 7), // "workdir"
QT_MOC_LITERAL(14, 190, 7), // "command"
QT_MOC_LITERAL(15, 198, 8), // "QString*"
QT_MOC_LITERAL(16, 207, 4), // "sout"
QT_MOC_LITERAL(17, 212, 4), // "serr"
QT_MOC_LITERAL(18, 217, 4), // "int*"
QT_MOC_LITERAL(19, 222, 4), // "ercd"
QT_MOC_LITERAL(20, 227, 22), // "copyAFileRemoteToLocal"
QT_MOC_LITERAL(21, 250, 8), // "rem_file"
QT_MOC_LITERAL(22, 259, 8), // "loc_file"
QT_MOC_LITERAL(23, 268, 22), // "copyAFileLocalToRemote"
QT_MOC_LITERAL(24, 291, 11), // "removeAFile"
QT_MOC_LITERAL(25, 303, 8), // "filename"
QT_MOC_LITERAL(26, 312, 17), // "checkIfFileExists"
QT_MOC_LITERAL(27, 330, 5), // "bool*"
QT_MOC_LITERAL(28, 336, 6), // "exists"
QT_MOC_LITERAL(29, 343, 9), // "fetchFile"
QT_MOC_LITERAL(30, 353, 8), // "contents"
QT_MOC_LITERAL(31, 362, 8), // "grepFile"
QT_MOC_LITERAL(32, 371, 9), // "matchText"
QT_MOC_LITERAL(33, 381, 12), // "QStringList*"
QT_MOC_LITERAL(34, 394, 7), // "matches"
QT_MOC_LITERAL(35, 402, 8), // "exitcode"
QT_MOC_LITERAL(36, 411, 13) // "caseSensitive"

    },
    "GlobalSearch::RemoteQueueInterface\0"
    "writeFiles\0\0Structure*\0s\0"
    "QHash<QString,QString>\0files\0startJob\0"
    "stopJob\0getStatus\0QueueInterface::QueueStatus\0"
    "prepareForStructureUpdate\0runACommand\0"
    "workdir\0command\0QString*\0sout\0serr\0"
    "int*\0ercd\0copyAFileRemoteToLocal\0"
    "rem_file\0loc_file\0copyAFileLocalToRemote\0"
    "removeAFile\0filename\0checkIfFileExists\0"
    "bool*\0exists\0fetchFile\0contents\0"
    "grepFile\0matchText\0QStringList*\0matches\0"
    "exitcode\0caseSensitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__RemoteQueueInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
       8,    1,   97,    2, 0x0a /* Public */,
       9,    1,  100,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      12,    5,  106,    2, 0x0a /* Public */,
      20,    2,  117,    2, 0x0a /* Public */,
      23,    2,  122,    2, 0x0a /* Public */,
      24,    2,  127,    2, 0x0a /* Public */,
      26,    3,  132,    2, 0x0a /* Public */,
      29,    3,  139,    2, 0x0a /* Public */,
      31,    6,  146,    2, 0x0a /* Public */,
      31,    5,  159,    2, 0x2a /* Public | MethodCloned */,
      31,    4,  170,    2, 0x2a /* Public | MethodCloned */,
      31,    3,  179,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    0x80000000 | 10, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 18,   13,   14,   16,   17,   19,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   21,   22,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   22,   21,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString,    4,   25,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 27,    4,   25,   28,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 15,    4,   25,   30,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 33, 0x80000000 | 18, QMetaType::Bool,    4,   32,   25,   34,   35,   36,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 33, 0x80000000 | 18,    4,   32,   25,   34,   35,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 33,    4,   32,   25,   34,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   32,   25,

       0        // eod
};

void GlobalSearch::RemoteQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteQueueInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->writeFiles((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->prepareForStructureUpdate((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->runACommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->copyAFileRemoteToLocal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->copyAFileLocalToRemote((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->removeAFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->checkIfFileExists((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->fetchFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::RemoteQueueInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QueueInterface::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__RemoteQueueInterface.data,
    qt_meta_data_GlobalSearch__RemoteQueueInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::RemoteQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::RemoteQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__RemoteQueueInterface.stringdata0))
        return static_cast<void*>(this);
    return QueueInterface::qt_metacast(_clname);
}

int GlobalSearch::RemoteQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
