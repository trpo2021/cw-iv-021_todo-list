/****************************************************************************
** Meta object code from reading C++ file 'testwriter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "testwriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testwriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestWriter_t {
    QByteArrayData data[15];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestWriter_t qt_meta_stringdata_TestWriter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestWriter"
QT_MOC_LITERAL(1, 11, 7), // "cleanup"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 20), // "testWriteInvalidArgs"
QT_MOC_LITERAL(4, 41, 23), // "testWriteFromStringData"
QT_MOC_LITERAL(5, 65, 24), // "testWriteFromVariantData"
QT_MOC_LITERAL(6, 90, 29), // "testWriteToFileWithDotsInName"
QT_MOC_LITERAL(7, 120, 19), // "testWriteAppendMode"
QT_MOC_LITERAL(8, 140, 32), // "testWriteWithNotDefaultSeparator"
QT_MOC_LITERAL(9, 173, 19), // "testWriteWithHeader"
QT_MOC_LITERAL(10, 193, 19), // "testWriteWithFooter"
QT_MOC_LITERAL(11, 213, 28), // "testWriteWithHeaderAndFooter"
QT_MOC_LITERAL(12, 242, 31), // "testWriterDataContainSeparators"
QT_MOC_LITERAL(13, 274, 28), // "testWriteDifferentDataAmount"
QT_MOC_LITERAL(14, 303, 24) // "testWriteDataContainCRLF"

    },
    "TestWriter\0cleanup\0\0testWriteInvalidArgs\0"
    "testWriteFromStringData\0"
    "testWriteFromVariantData\0"
    "testWriteToFileWithDotsInName\0"
    "testWriteAppendMode\0"
    "testWriteWithNotDefaultSeparator\0"
    "testWriteWithHeader\0testWriteWithFooter\0"
    "testWriteWithHeaderAndFooter\0"
    "testWriterDataContainSeparators\0"
    "testWriteDifferentDataAmount\0"
    "testWriteDataContainCRLF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestWriter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestWriter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->testWriteInvalidArgs(); break;
        case 2: _t->testWriteFromStringData(); break;
        case 3: _t->testWriteFromVariantData(); break;
        case 4: _t->testWriteToFileWithDotsInName(); break;
        case 5: _t->testWriteAppendMode(); break;
        case 6: _t->testWriteWithNotDefaultSeparator(); break;
        case 7: _t->testWriteWithHeader(); break;
        case 8: _t->testWriteWithFooter(); break;
        case 9: _t->testWriteWithHeaderAndFooter(); break;
        case 10: _t->testWriterDataContainSeparators(); break;
        case 11: _t->testWriteDifferentDataAmount(); break;
        case 12: _t->testWriteDataContainCRLF(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestWriter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TestWriter.data,
    qt_meta_data_TestWriter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestWriter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
