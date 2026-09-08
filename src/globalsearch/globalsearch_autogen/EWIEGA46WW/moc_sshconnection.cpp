/****************************************************************************
** Meta object code from reading C++ file 'sshconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../sshconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__SSHConnection_t {
    QByteArrayData data[29];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__SSHConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__SSHConnection_t qt_meta_stringdata_GlobalSearch__SSHConnection = {
    {
QT_MOC_LITERAL(0, 0, 27), // "GlobalSearch::SSHConnection"
QT_MOC_LITERAL(1, 28, 15), // "setLoginDetails"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "host"
QT_MOC_LITERAL(4, 50, 4), // "user"
QT_MOC_LITERAL(5, 55, 4), // "pass"
QT_MOC_LITERAL(6, 60, 4), // "port"
QT_MOC_LITERAL(7, 65, 7), // "execute"
QT_MOC_LITERAL(8, 73, 7), // "command"
QT_MOC_LITERAL(9, 81, 8), // "QString&"
QT_MOC_LITERAL(10, 90, 10), // "stdout_str"
QT_MOC_LITERAL(11, 101, 10), // "stderr_str"
QT_MOC_LITERAL(12, 112, 4), // "int&"
QT_MOC_LITERAL(13, 117, 8), // "exitcode"
QT_MOC_LITERAL(14, 126, 12), // "printWarning"
QT_MOC_LITERAL(15, 139, 16), // "copyFileToServer"
QT_MOC_LITERAL(16, 156, 9), // "localpath"
QT_MOC_LITERAL(17, 166, 10), // "remotepath"
QT_MOC_LITERAL(18, 177, 18), // "copyFileFromServer"
QT_MOC_LITERAL(19, 196, 14), // "readRemoteFile"
QT_MOC_LITERAL(20, 211, 8), // "filename"
QT_MOC_LITERAL(21, 220, 8), // "contents"
QT_MOC_LITERAL(22, 229, 16), // "removeRemoteFile"
QT_MOC_LITERAL(23, 246, 21), // "copyDirectoryToServer"
QT_MOC_LITERAL(24, 268, 23), // "copyDirectoryFromServer"
QT_MOC_LITERAL(25, 292, 27), // "readRemoteDirectoryContents"
QT_MOC_LITERAL(26, 320, 12), // "QStringList&"
QT_MOC_LITERAL(27, 333, 21), // "removeRemoteDirectory"
QT_MOC_LITERAL(28, 355, 18) // "onlyDeleteContents"

    },
    "GlobalSearch::SSHConnection\0setLoginDetails\0"
    "\0host\0user\0pass\0port\0execute\0command\0"
    "QString&\0stdout_str\0stderr_str\0int&\0"
    "exitcode\0printWarning\0copyFileToServer\0"
    "localpath\0remotepath\0copyFileFromServer\0"
    "readRemoteFile\0filename\0contents\0"
    "removeRemoteFile\0copyDirectoryToServer\0"
    "copyDirectoryFromServer\0"
    "readRemoteDirectoryContents\0QStringList&\0"
    "removeRemoteDirectory\0onlyDeleteContents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__SSHConnection[] = {

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
       1,    4,   89,    2, 0x0a /* Public */,
       1,    3,   98,    2, 0x2a /* Public | MethodCloned */,
       1,    2,  105,    2, 0x2a /* Public | MethodCloned */,
       1,    1,  110,    2, 0x2a /* Public | MethodCloned */,
       7,    5,  113,    2, 0x0a /* Public */,
       7,    4,  124,    2, 0x2a /* Public | MethodCloned */,
      15,    2,  133,    2, 0x0a /* Public */,
      18,    2,  138,    2, 0x0a /* Public */,
      19,    2,  143,    2, 0x0a /* Public */,
      22,    1,  148,    2, 0x0a /* Public */,
      23,    2,  151,    2, 0x0a /* Public */,
      24,    2,  156,    2, 0x0a /* Public */,
      25,    2,  161,    2, 0x0a /* Public */,
      27,    2,  166,    2, 0x0a /* Public */,
      27,    1,  171,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12, QMetaType::Bool,    8,   10,   11,   13,   14,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12,    8,   10,   11,   13,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   17,   16,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 9,   20,   21,
    QMetaType::Bool, QMetaType::QString,   20,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   17,   16,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 26,   17,   21,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   17,   28,
    QMetaType::Bool, QMetaType::QString,   17,

       0        // eod
};

void GlobalSearch::SSHConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SSHConnection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setLoginDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->copyFileToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->copyFileFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->readRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->removeRemoteFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->copyDirectoryToServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->copyDirectoryFromServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->readRemoteDirectoryContents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->removeRemoteDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::SSHConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__SSHConnection.data,
    qt_meta_data_GlobalSearch__SSHConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::SSHConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::SSHConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__SSHConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::SSHConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
