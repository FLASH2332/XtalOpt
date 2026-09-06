/****************************************************************************
** Meta object code from reading C++ file 'local.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../queueinterfaces/local.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'local.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__LocalQueueProcess_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__LocalQueueProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__LocalQueueProcess_t qt_meta_stringdata_GlobalSearch__LocalQueueProcess = {
    {
QT_MOC_LITERAL(0, 0, 31), // "GlobalSearch::LocalQueueProcess"
QT_MOC_LITERAL(1, 32, 10), // "setRunning"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "setFinished"
QT_MOC_LITERAL(4, 56, 6), // "status"
QT_MOC_LITERAL(5, 63, 6) // "Status"

    },
    "GlobalSearch::LocalQueueProcess\0"
    "setRunning\0\0setFinished\0status\0Status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__LocalQueueProcess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,

       0        // eod
};

void GlobalSearch::LocalQueueProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalQueueProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setRunning(); break;
        case 1: _t->setFinished(); break;
        case 2: { Status _r = _t->status();
            if (_a[0]) *reinterpret_cast< Status*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::LocalQueueProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QProcess::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__LocalQueueProcess.data,
    qt_meta_data_GlobalSearch__LocalQueueProcess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::LocalQueueProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::LocalQueueProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LocalQueueProcess.stringdata0))
        return static_cast<void*>(this);
    return QProcess::qt_metacast(_clname);
}

int GlobalSearch::LocalQueueProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_GlobalSearch__LocalQueueInterface_t {
    QByteArrayData data[40];
    char stringdata0[458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__LocalQueueInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__LocalQueueInterface_t qt_meta_stringdata_GlobalSearch__LocalQueueInterface = {
    {
QT_MOC_LITERAL(0, 0, 33), // "GlobalSearch::LocalQueueInter..."
QT_MOC_LITERAL(1, 34, 10), // "writeFiles"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "Structure*"
QT_MOC_LITERAL(4, 57, 1), // "s"
QT_MOC_LITERAL(5, 59, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(6, 82, 5), // "files"
QT_MOC_LITERAL(7, 88, 17), // "logErrorDirectory"
QT_MOC_LITERAL(8, 106, 8), // "startJob"
QT_MOC_LITERAL(9, 115, 7), // "stopJob"
QT_MOC_LITERAL(10, 123, 9), // "getStatus"
QT_MOC_LITERAL(11, 133, 27), // "QueueInterface::QueueStatus"
QT_MOC_LITERAL(12, 161, 25), // "prepareForStructureUpdate"
QT_MOC_LITERAL(13, 187, 11), // "runACommand"
QT_MOC_LITERAL(14, 199, 7), // "workdir"
QT_MOC_LITERAL(15, 207, 7), // "command"
QT_MOC_LITERAL(16, 215, 8), // "QString*"
QT_MOC_LITERAL(17, 224, 4), // "sout"
QT_MOC_LITERAL(18, 229, 4), // "serr"
QT_MOC_LITERAL(19, 234, 4), // "int*"
QT_MOC_LITERAL(20, 239, 4), // "ercd"
QT_MOC_LITERAL(21, 244, 22), // "copyAFileRemoteToLocal"
QT_MOC_LITERAL(22, 267, 8), // "rem_file"
QT_MOC_LITERAL(23, 276, 8), // "loc_file"
QT_MOC_LITERAL(24, 285, 22), // "copyAFileLocalToRemote"
QT_MOC_LITERAL(25, 308, 11), // "removeAFile"
QT_MOC_LITERAL(26, 320, 8), // "filename"
QT_MOC_LITERAL(27, 329, 17), // "checkIfFileExists"
QT_MOC_LITERAL(28, 347, 5), // "bool*"
QT_MOC_LITERAL(29, 353, 6), // "exists"
QT_MOC_LITERAL(30, 360, 9), // "fetchFile"
QT_MOC_LITERAL(31, 370, 8), // "contents"
QT_MOC_LITERAL(32, 379, 8), // "grepFile"
QT_MOC_LITERAL(33, 388, 9), // "matchText"
QT_MOC_LITERAL(34, 398, 12), // "QStringList*"
QT_MOC_LITERAL(35, 411, 7), // "matches"
QT_MOC_LITERAL(36, 419, 8), // "exitcode"
QT_MOC_LITERAL(37, 428, 13), // "caseSensitive"
QT_MOC_LITERAL(38, 442, 6), // "dialog"
QT_MOC_LITERAL(39, 449, 8) // "QDialog*"

    },
    "GlobalSearch::LocalQueueInterface\0"
    "writeFiles\0\0Structure*\0s\0"
    "QHash<QString,QString>\0files\0"
    "logErrorDirectory\0startJob\0stopJob\0"
    "getStatus\0QueueInterface::QueueStatus\0"
    "prepareForStructureUpdate\0runACommand\0"
    "workdir\0command\0QString*\0sout\0serr\0"
    "int*\0ercd\0copyAFileRemoteToLocal\0"
    "rem_file\0loc_file\0copyAFileLocalToRemote\0"
    "removeAFile\0filename\0checkIfFileExists\0"
    "bool*\0exists\0fetchFile\0contents\0"
    "grepFile\0matchText\0QStringList*\0matches\0"
    "exitcode\0caseSensitive\0dialog\0QDialog*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__LocalQueueInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x0a /* Public */,
       7,    1,  104,    2, 0x0a /* Public */,
       8,    1,  107,    2, 0x0a /* Public */,
       9,    1,  110,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,
      12,    1,  116,    2, 0x0a /* Public */,
      13,    5,  119,    2, 0x0a /* Public */,
      21,    2,  130,    2, 0x0a /* Public */,
      24,    2,  135,    2, 0x0a /* Public */,
      25,    2,  140,    2, 0x0a /* Public */,
      27,    3,  145,    2, 0x0a /* Public */,
      30,    3,  152,    2, 0x0a /* Public */,
      32,    6,  159,    2, 0x0a /* Public */,
      32,    5,  172,    2, 0x2a /* Public | MethodCloned */,
      32,    4,  183,    2, 0x2a /* Public | MethodCloned */,
      32,    3,  192,    2, 0x2a /* Public | MethodCloned */,
      38,    0,  199,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    0x80000000 | 11, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 19,   14,   15,   17,   18,   20,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   22,   23,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   23,   22,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString,    4,   26,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 28,    4,   26,   29,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 16,    4,   26,   31,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 34, 0x80000000 | 19, QMetaType::Bool,    4,   33,   26,   35,   36,   37,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 34, 0x80000000 | 19,    4,   33,   26,   35,   36,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 34,    4,   33,   26,   35,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   33,   26,
    0x80000000 | 39,

       0        // eod
};

void GlobalSearch::LocalQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalQueueInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->writeFiles((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->logErrorDirectory((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->prepareForStructureUpdate((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->runACommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->copyAFileRemoteToLocal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->copyAFileLocalToRemote((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->removeAFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->checkIfFileExists((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->fetchFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { QDialog* _r = _t->dialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
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
        case 5:
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
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Structure* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::LocalQueueInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QueueInterface::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__LocalQueueInterface.data,
    qt_meta_data_GlobalSearch__LocalQueueInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::LocalQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::LocalQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LocalQueueInterface.stringdata0))
        return static_cast<void*>(this);
    return QueueInterface::qt_metacast(_clname);
}

int GlobalSearch::LocalQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
