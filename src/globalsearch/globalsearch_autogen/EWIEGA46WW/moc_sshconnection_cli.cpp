/****************************************************************************
** Meta object code from reading C++ file 'sshconnection_cli.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../sshconnection_cli.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshconnection_cli.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__SSHConnectionCLI_t {
    QByteArrayData data[24];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__SSHConnectionCLI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__SSHConnectionCLI_t qt_meta_stringdata_GlobalSearch__SSHConnectionCLI = {
    {
QT_MOC_LITERAL(0, 0, 30), // "GlobalSearch::SSHConnectionCLI"
QT_MOC_LITERAL(1, 31, 7), // "execute"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "command"
QT_MOC_LITERAL(4, 48, 8), // "QString&"
QT_MOC_LITERAL(5, 57, 10), // "stdout_str"
QT_MOC_LITERAL(6, 68, 10), // "stderr_str"
QT_MOC_LITERAL(7, 79, 4), // "int&"
QT_MOC_LITERAL(8, 84, 8), // "exitcode"
QT_MOC_LITERAL(9, 93, 12), // "printWarning"
QT_MOC_LITERAL(10, 106, 16), // "copyFileToServer"
QT_MOC_LITERAL(11, 123, 9), // "localpath"
QT_MOC_LITERAL(12, 133, 10), // "remotepath"
QT_MOC_LITERAL(13, 144, 18), // "copyFileFromServer"
QT_MOC_LITERAL(14, 163, 14), // "readRemoteFile"
QT_MOC_LITERAL(15, 178, 8), // "filename"
QT_MOC_LITERAL(16, 187, 8), // "contents"
QT_MOC_LITERAL(17, 196, 16), // "removeRemoteFile"
QT_MOC_LITERAL(18, 213, 21), // "copyDirectoryToServer"
QT_MOC_LITERAL(19, 235, 23), // "copyDirectoryFromServer"
QT_MOC_LITERAL(20, 259, 27), // "readRemoteDirectoryContents"
QT_MOC_LITERAL(21, 287, 12), // "QStringList&"
QT_MOC_LITERAL(22, 300, 21), // "removeRemoteDirectory"
QT_MOC_LITERAL(23, 322, 18) // "onlyDeleteContents"

    },
    "GlobalSearch::SSHConnectionCLI\0execute\0"
    "\0command\0QString&\0stdout_str\0stderr_str\0"
    "int&\0exitcode\0printWarning\0copyFileToServer\0"
    "localpath\0remotepath\0copyFileFromServer\0"
    "readRemoteFile\0filename\0contents\0"
    "removeRemoteFile\0copyDirectoryToServer\0"
    "copyDirectoryFromServer\0"
    "readRemoteDirectoryContents\0QStringList&\0"
    "removeRemoteDirectory\0onlyDeleteContents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__SSHConnectionCLI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   69,    2, 0x0a /* Public */,
       1,    4,   80,    2, 0x2a /* Public | MethodCloned */,
      10,    2,   89,    2, 0x0a /* Public */,
      13,    2,   94,    2, 0x0a /* Public */,
      14,    2,   99,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      18,    2,  107,    2, 0x0a /* Public */,
      19,    2,  112,    2, 0x0a /* Public */,
      20,    2,  117,    2, 0x0a /* Public */,
      22,    2,  122,    2, 0x0a /* Public */,
      22,    1,  127,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 7, QMetaType::Bool,    3,    5,    6,    8,    9,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 7,    3,    5,    6,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   12,   11,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4,   15,   16,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   12,   11,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 21,   12,   16,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   12,   23,
    QMetaType::Bool, QMetaType::QString,   12,

       0        // eod
};

void GlobalSearch::SSHConnectionCLI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SSHConnectionCLI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->copyFileToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->copyFileFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->readRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->removeRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->copyDirectoryToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->copyDirectoryFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->readRemoteDirectoryContents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::SSHConnectionCLI::staticMetaObject = { {
    QMetaObject::SuperData::link<SSHConnection::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__SSHConnectionCLI.data,
    qt_meta_data_GlobalSearch__SSHConnectionCLI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::SSHConnectionCLI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::SSHConnectionCLI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__SSHConnectionCLI.stringdata0))
        return static_cast<void*>(this);
    return SSHConnection::qt_metacast(_clname);
}

int GlobalSearch::SSHConnectionCLI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SSHConnection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
