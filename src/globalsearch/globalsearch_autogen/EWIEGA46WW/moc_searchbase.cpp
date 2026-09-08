/****************************************************************************
** Meta object code from reading C++ file 'searchbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../searchbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch__SearchBase_t {
    QByteArrayData data[91];
    char stringdata0[1428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch__SearchBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch__SearchBase_t qt_meta_stringdata_GlobalSearch__SearchBase = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GlobalSearch::SearchBase"
QT_MOC_LITERAL(1, 25, 18), // "doneWithObjectives"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "Structure*"
QT_MOC_LITERAL(4, 56, 1), // "s"
QT_MOC_LITERAL(5, 58, 15), // "startingSession"
QT_MOC_LITERAL(6, 74, 14), // "sessionStarted"
QT_MOC_LITERAL(7, 89, 22), // "readOnlySessionStarted"
QT_MOC_LITERAL(8, 112, 9), // "dialogSet"
QT_MOC_LITERAL(9, 122, 21), // "queueInterfaceChanged"
QT_MOC_LITERAL(10, 144, 11), // "std::string"
QT_MOC_LITERAL(11, 156, 6), // "qiName"
QT_MOC_LITERAL(12, 163, 16), // "optimizerChanged"
QT_MOC_LITERAL(13, 180, 7), // "optName"
QT_MOC_LITERAL(14, 188, 14), // "debugStatement"
QT_MOC_LITERAL(15, 203, 16), // "warningStatement"
QT_MOC_LITERAL(16, 220, 14), // "errorStatement"
QT_MOC_LITERAL(17, 235, 16), // "messageStatement"
QT_MOC_LITERAL(18, 252, 11), // "needBoolean"
QT_MOC_LITERAL(19, 264, 7), // "message"
QT_MOC_LITERAL(20, 272, 5), // "bool*"
QT_MOC_LITERAL(21, 278, 2), // "ok"
QT_MOC_LITERAL(22, 281, 12), // "needPassword"
QT_MOC_LITERAL(23, 294, 8), // "QString*"
QT_MOC_LITERAL(24, 303, 11), // "newPassword"
QT_MOC_LITERAL(25, 315, 23), // "refreshAllStructureInfo"
QT_MOC_LITERAL(26, 339, 16), // "sig_setClipboard"
QT_MOC_LITERAL(27, 356, 4), // "text"
QT_MOC_LITERAL(28, 361, 5), // "reset"
QT_MOC_LITERAL(29, 367, 20), // "createSSHConnections"
QT_MOC_LITERAL(30, 388, 11), // "startSearch"
QT_MOC_LITERAL(31, 400, 20), // "generateNewStructure"
QT_MOC_LITERAL(32, 421, 5), // "debug"
QT_MOC_LITERAL(33, 427, 7), // "warning"
QT_MOC_LITERAL(34, 435, 5), // "error"
QT_MOC_LITERAL(35, 441, 18), // "emitSessionStarted"
QT_MOC_LITERAL(36, 460, 26), // "emitReadOnlySessionStarted"
QT_MOC_LITERAL(37, 487, 19), // "emitStartingSession"
QT_MOC_LITERAL(38, 507, 17), // "setIsStartingTrue"
QT_MOC_LITERAL(39, 525, 18), // "setIsStartingFalse"
QT_MOC_LITERAL(40, 544, 15), // "setReadOnlyTrue"
QT_MOC_LITERAL(41, 560, 16), // "setReadOnlyFalse"
QT_MOC_LITERAL(42, 577, 14), // "getNumOptSteps"
QT_MOC_LITERAL(43, 592, 6), // "size_t"
QT_MOC_LITERAL(44, 599, 13), // "clearOptSteps"
QT_MOC_LITERAL(45, 613, 13), // "appendOptStep"
QT_MOC_LITERAL(46, 627, 13), // "insertOptStep"
QT_MOC_LITERAL(47, 641, 7), // "optStep"
QT_MOC_LITERAL(48, 649, 13), // "removeOptStep"
QT_MOC_LITERAL(49, 663, 17), // "setQueueInterface"
QT_MOC_LITERAL(50, 681, 25), // "getQueueInterfaceTemplate"
QT_MOC_LITERAL(51, 707, 4), // "name"
QT_MOC_LITERAL(52, 712, 25), // "setQueueInterfaceTemplate"
QT_MOC_LITERAL(53, 738, 4), // "temp"
QT_MOC_LITERAL(54, 743, 12), // "setOptimizer"
QT_MOC_LITERAL(55, 756, 20), // "getOptimizerTemplate"
QT_MOC_LITERAL(56, 777, 20), // "setOptimizerTemplate"
QT_MOC_LITERAL(57, 798, 15), // "getTemplateType"
QT_MOC_LITERAL(58, 814, 12), // "TemplateType"
QT_MOC_LITERAL(59, 827, 11), // "getTemplate"
QT_MOC_LITERAL(60, 839, 11), // "setTemplate"
QT_MOC_LITERAL(61, 851, 39), // "readQueueInterfaceTemplatesFr..."
QT_MOC_LITERAL(62, 891, 8), // "filename"
QT_MOC_LITERAL(63, 900, 34), // "readOptimizerTemplatesFromSet..."
QT_MOC_LITERAL(64, 935, 25), // "readTemplatesFromSettings"
QT_MOC_LITERAL(65, 961, 28), // "readAllTemplatesFromSettings"
QT_MOC_LITERAL(66, 990, 38), // "writeQueueInterfaceTemplatesT..."
QT_MOC_LITERAL(67, 1029, 33), // "writeOptimizerTemplatesToSett..."
QT_MOC_LITERAL(68, 1063, 24), // "writeTemplatesToSettings"
QT_MOC_LITERAL(69, 1088, 27), // "writeAllTemplatesToSettings"
QT_MOC_LITERAL(70, 1116, 26), // "readUserValuesFromSettings"
QT_MOC_LITERAL(71, 1143, 25), // "writeUserValuesToSettings"
QT_MOC_LITERAL(72, 1169, 8), // "getUser1"
QT_MOC_LITERAL(73, 1178, 8), // "getUser2"
QT_MOC_LITERAL(74, 1187, 8), // "getUser3"
QT_MOC_LITERAL(75, 1196, 8), // "getUser4"
QT_MOC_LITERAL(76, 1205, 8), // "setUser1"
QT_MOC_LITERAL(77, 1214, 8), // "setUser2"
QT_MOC_LITERAL(78, 1223, 8), // "setUser3"
QT_MOC_LITERAL(79, 1232, 8), // "setUser4"
QT_MOC_LITERAL(80, 1241, 15), // "isReadyToSearch"
QT_MOC_LITERAL(81, 1257, 8), // "QString&"
QT_MOC_LITERAL(82, 1266, 3), // "err"
QT_MOC_LITERAL(83, 1270, 24), // "anyRemoteQueueInterfaces"
QT_MOC_LITERAL(84, 1295, 16), // "promptForBoolean"
QT_MOC_LITERAL(85, 1312, 17), // "promptForPassword"
QT_MOC_LITERAL(86, 1330, 12), // "setClipboard"
QT_MOC_LITERAL(87, 1343, 18), // "cancelJobAfterTime"
QT_MOC_LITERAL(88, 1362, 26), // "hoursForCancelJobAfterTime"
QT_MOC_LITERAL(89, 1389, 13), // "setClipboard_"
QT_MOC_LITERAL(90, 1403, 24) // "createSSHConnections_cli"

    },
    "GlobalSearch::SearchBase\0doneWithObjectives\0"
    "\0Structure*\0s\0startingSession\0"
    "sessionStarted\0readOnlySessionStarted\0"
    "dialogSet\0queueInterfaceChanged\0"
    "std::string\0qiName\0optimizerChanged\0"
    "optName\0debugStatement\0warningStatement\0"
    "errorStatement\0messageStatement\0"
    "needBoolean\0message\0bool*\0ok\0needPassword\0"
    "QString*\0newPassword\0refreshAllStructureInfo\0"
    "sig_setClipboard\0text\0reset\0"
    "createSSHConnections\0startSearch\0"
    "generateNewStructure\0debug\0warning\0"
    "error\0emitSessionStarted\0"
    "emitReadOnlySessionStarted\0"
    "emitStartingSession\0setIsStartingTrue\0"
    "setIsStartingFalse\0setReadOnlyTrue\0"
    "setReadOnlyFalse\0getNumOptSteps\0size_t\0"
    "clearOptSteps\0appendOptStep\0insertOptStep\0"
    "optStep\0removeOptStep\0setQueueInterface\0"
    "getQueueInterfaceTemplate\0name\0"
    "setQueueInterfaceTemplate\0temp\0"
    "setOptimizer\0getOptimizerTemplate\0"
    "setOptimizerTemplate\0getTemplateType\0"
    "TemplateType\0getTemplate\0setTemplate\0"
    "readQueueInterfaceTemplatesFromSettings\0"
    "filename\0readOptimizerTemplatesFromSettings\0"
    "readTemplatesFromSettings\0"
    "readAllTemplatesFromSettings\0"
    "writeQueueInterfaceTemplatesToSettings\0"
    "writeOptimizerTemplatesToSettings\0"
    "writeTemplatesToSettings\0"
    "writeAllTemplatesToSettings\0"
    "readUserValuesFromSettings\0"
    "writeUserValuesToSettings\0getUser1\0"
    "getUser2\0getUser3\0getUser4\0setUser1\0"
    "setUser2\0setUser3\0setUser4\0isReadyToSearch\0"
    "QString&\0err\0anyRemoteQueueInterfaces\0"
    "promptForBoolean\0promptForPassword\0"
    "setClipboard\0cancelJobAfterTime\0"
    "hoursForCancelJobAfterTime\0setClipboard_\0"
    "createSSHConnections_cli"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch__SearchBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      75,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  389,    2, 0x06 /* Public */,
       5,    0,  392,    2, 0x06 /* Public */,
       6,    0,  393,    2, 0x06 /* Public */,
       7,    0,  394,    2, 0x06 /* Public */,
       8,    0,  395,    2, 0x06 /* Public */,
       9,    1,  396,    2, 0x06 /* Public */,
      12,    1,  399,    2, 0x06 /* Public */,
      14,    1,  402,    2, 0x06 /* Public */,
      15,    1,  405,    2, 0x06 /* Public */,
      16,    1,  408,    2, 0x06 /* Public */,
      17,    1,  411,    2, 0x06 /* Public */,
      18,    2,  414,    2, 0x06 /* Public */,
      22,    3,  419,    2, 0x06 /* Public */,
      25,    0,  426,    2, 0x06 /* Public */,
      26,    1,  427,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  430,    2, 0x0a /* Public */,
      29,    0,  431,    2, 0x0a /* Public */,
      30,    0,  432,    2, 0x0a /* Public */,
      31,    0,  433,    2, 0x0a /* Public */,
      32,    1,  434,    2, 0x0a /* Public */,
      33,    1,  437,    2, 0x0a /* Public */,
      34,    1,  440,    2, 0x0a /* Public */,
      19,    1,  443,    2, 0x0a /* Public */,
      35,    0,  446,    2, 0x0a /* Public */,
      36,    0,  447,    2, 0x0a /* Public */,
      37,    0,  448,    2, 0x0a /* Public */,
      38,    0,  449,    2, 0x0a /* Public */,
      39,    0,  450,    2, 0x0a /* Public */,
      40,    0,  451,    2, 0x0a /* Public */,
      41,    0,  452,    2, 0x0a /* Public */,
      42,    0,  453,    2, 0x0a /* Public */,
      44,    0,  454,    2, 0x0a /* Public */,
      45,    0,  455,    2, 0x0a /* Public */,
      46,    1,  456,    2, 0x0a /* Public */,
      48,    1,  459,    2, 0x0a /* Public */,
      49,    2,  462,    2, 0x0a /* Public */,
      50,    2,  467,    2, 0x0a /* Public */,
      52,    3,  472,    2, 0x0a /* Public */,
      54,    2,  479,    2, 0x0a /* Public */,
      55,    2,  484,    2, 0x0a /* Public */,
      56,    3,  489,    2, 0x0a /* Public */,
      57,    2,  496,    2, 0x0a /* Public */,
      59,    2,  501,    2, 0x0a /* Public */,
      60,    3,  506,    2, 0x0a /* Public */,
      61,    2,  513,    2, 0x0a /* Public */,
      63,    2,  518,    2, 0x0a /* Public */,
      64,    2,  523,    2, 0x0a /* Public */,
      65,    1,  528,    2, 0x0a /* Public */,
      66,    2,  531,    2, 0x0a /* Public */,
      67,    2,  536,    2, 0x0a /* Public */,
      68,    2,  541,    2, 0x0a /* Public */,
      69,    1,  546,    2, 0x0a /* Public */,
      70,    1,  549,    2, 0x0a /* Public */,
      70,    0,  552,    2, 0x2a /* Public | MethodCloned */,
      71,    1,  553,    2, 0x0a /* Public */,
      71,    0,  556,    2, 0x2a /* Public | MethodCloned */,
      72,    0,  557,    2, 0x0a /* Public */,
      73,    0,  558,    2, 0x0a /* Public */,
      74,    0,  559,    2, 0x0a /* Public */,
      75,    0,  560,    2, 0x0a /* Public */,
      76,    1,  561,    2, 0x0a /* Public */,
      77,    1,  564,    2, 0x0a /* Public */,
      78,    1,  567,    2, 0x0a /* Public */,
      79,    1,  570,    2, 0x0a /* Public */,
      80,    1,  573,    2, 0x0a /* Public */,
      83,    0,  576,    2, 0x0a /* Public */,
      84,    2,  577,    2, 0x0a /* Public */,
      84,    1,  582,    2, 0x2a /* Public | MethodCloned */,
      85,    3,  585,    2, 0x0a /* Public */,
      85,    2,  592,    2, 0x2a /* Public | MethodCloned */,
      86,    1,  597,    2, 0x0a /* Public */,
      87,    0,  600,    2, 0x0a /* Public */,
      88,    0,  601,    2, 0x0a /* Public */,
      89,    1,  602,    2, 0x09 /* Protected */,
      90,    0,  605,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   13,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23, 0x80000000 | 20,   19,   24,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   47,
    QMetaType::Void, 0x80000000 | 43,   47,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   11,
    0x80000000 | 10, 0x80000000 | 43, 0x80000000 | 10,   47,   51,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10, 0x80000000 | 10,   47,   51,   53,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   13,
    0x80000000 | 10, 0x80000000 | 43, 0x80000000 | 10,   47,   51,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10, 0x80000000 | 10,   47,   51,   53,
    0x80000000 | 58, 0x80000000 | 43, 0x80000000 | 10,   47,   51,
    0x80000000 | 10, 0x80000000 | 43, 0x80000000 | 10,   47,   51,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10, 0x80000000 | 10,   47,   51,   53,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   62,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   62,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   62,
    QMetaType::Void, 0x80000000 | 10,   62,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   62,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   62,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 10,   47,   62,
    QMetaType::Void, 0x80000000 | 10,   62,
    QMetaType::Void, 0x80000000 | 10,   62,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   62,
    QMetaType::Void,
    0x80000000 | 10,
    0x80000000 | 10,
    0x80000000 | 10,
    0x80000000 | 10,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Bool, 0x80000000 | 81,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23, 0x80000000 | 20,   19,   24,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,   19,   24,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Bool,

       0        // eod
};

void GlobalSearch::SearchBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doneWithObjectives((*reinterpret_cast< Structure*(*)>(_a[1]))); break;
        case 1: _t->startingSession(); break;
        case 2: _t->sessionStarted(); break;
        case 3: _t->readOnlySessionStarted(); break;
        case 4: _t->dialogSet(); break;
        case 5: _t->queueInterfaceChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->optimizerChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->debugStatement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->warningStatement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->errorStatement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->messageStatement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->needBoolean((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 12: _t->needPassword((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 13: _t->refreshAllStructureInfo(); break;
        case 14: _t->sig_setClipboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->reset(); break;
        case 16: { bool _r = _t->createSSHConnections();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->startSearch();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->generateNewStructure(); break;
        case 19: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->emitSessionStarted(); break;
        case 24: _t->emitReadOnlySessionStarted(); break;
        case 25: _t->emitStartingSession(); break;
        case 26: _t->setIsStartingTrue(); break;
        case 27: _t->setIsStartingFalse(); break;
        case 28: _t->setReadOnlyTrue(); break;
        case 29: _t->setReadOnlyFalse(); break;
        case 30: { size_t _r = _t->getNumOptSteps();
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->clearOptSteps(); break;
        case 32: _t->appendOptStep(); break;
        case 33: _t->insertOptStep((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 34: _t->removeOptStep((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 35: _t->setQueueInterface((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 36: { std::string _r = _t->getQueueInterfaceTemplate((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setQueueInterfaceTemplate((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 38: _t->setOptimizer((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 39: { std::string _r = _t->getOptimizerTemplate((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setOptimizerTemplate((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 41: { TemplateType _r = _t->getTemplateType((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TemplateType*>(_a[0]) = std::move(_r); }  break;
        case 42: { std::string _r = _t->getTemplate((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setTemplate((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 44: _t->readQueueInterfaceTemplatesFromSettings((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 45: _t->readOptimizerTemplatesFromSettings((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 46: _t->readTemplatesFromSettings((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 47: _t->readAllTemplatesFromSettings((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 48: _t->writeQueueInterfaceTemplatesToSettings((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 49: _t->writeOptimizerTemplatesToSettings((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 50: _t->writeTemplatesToSettings((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 51: _t->writeAllTemplatesToSettings((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 52: _t->readUserValuesFromSettings((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 53: _t->readUserValuesFromSettings(); break;
        case 54: _t->writeUserValuesToSettings((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 55: _t->writeUserValuesToSettings(); break;
        case 56: { std::string _r = _t->getUser1();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 57: { std::string _r = _t->getUser2();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 58: { std::string _r = _t->getUser3();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 59: { std::string _r = _t->getUser4();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setUser1((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 61: _t->setUser2((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 62: _t->setUser3((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 63: _t->setUser4((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 64: { bool _r = _t->isReadyToSearch((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: { bool _r = _t->anyRemoteQueueInterfaces();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->promptForBoolean((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 67: _t->promptForBoolean((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 68: _t->promptForPassword((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 69: _t->promptForPassword((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 70: _t->setClipboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 71: { bool _r = _t->cancelJobAfterTime();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: { double _r = _t->hoursForCancelJobAfterTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setClipboard_((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 74: { bool _r = _t->createSSHConnections_cli();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchBase::*)(Structure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::doneWithObjectives)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::startingSession)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::sessionStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::readOnlySessionStarted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::dialogSet)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::queueInterfaceChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::optimizerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::debugStatement)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::warningStatement)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::errorStatement)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::messageStatement)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::needBoolean)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & , QString * , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::needPassword)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::refreshAllStructureInfo)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SearchBase::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBase::sig_setClipboard)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::SearchBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch__SearchBase.data,
    qt_meta_data_GlobalSearch__SearchBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::SearchBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::SearchBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__SearchBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::SearchBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 75)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 75;
    }
    return _id;
}

// SIGNAL 0
void GlobalSearch::SearchBase::doneWithObjectives(Structure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalSearch::SearchBase::startingSession()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GlobalSearch::SearchBase::sessionStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GlobalSearch::SearchBase::readOnlySessionStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GlobalSearch::SearchBase::dialogSet()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GlobalSearch::SearchBase::queueInterfaceChanged(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GlobalSearch::SearchBase::optimizerChanged(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GlobalSearch::SearchBase::debugStatement(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GlobalSearch::SearchBase::warningStatement(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GlobalSearch::SearchBase::errorStatement(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GlobalSearch::SearchBase::messageStatement(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GlobalSearch::SearchBase::needBoolean(const QString & _t1, bool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GlobalSearch::SearchBase::needPassword(const QString & _t1, QString * _t2, bool * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GlobalSearch::SearchBase::refreshAllStructureInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void GlobalSearch::SearchBase::sig_setClipboard(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalSearch::SearchBase *>(this), &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
