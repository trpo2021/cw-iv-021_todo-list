/****************************************************************************
** Meta object code from reading C++ file 'testvariantdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "testvariantdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testvariantdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestVariantData_t {
    QByteArrayData data[16];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestVariantData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestVariantData_t qt_meta_stringdata_TestVariantData = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TestVariantData"
QT_MOC_LITERAL(1, 16, 12), // "testCreation"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "testAddEmptyRow"
QT_MOC_LITERAL(4, 46, 13), // "testAddOneRow"
QT_MOC_LITERAL(5, 60, 28), // "testAddOneRowUsingOneElement"
QT_MOC_LITERAL(6, 89, 11), // "testAddRows"
QT_MOC_LITERAL(7, 101, 18), // "testClearEmptyData"
QT_MOC_LITERAL(8, 120, 21), // "testClearNotEmptyData"
QT_MOC_LITERAL(9, 142, 14), // "testInsertRows"
QT_MOC_LITERAL(10, 157, 22), // "testCompareForEquality"
QT_MOC_LITERAL(11, 180, 20), // "testCopyConstruction"
QT_MOC_LITERAL(12, 201, 18), // "testCopyAssignment"
QT_MOC_LITERAL(13, 220, 17), // "testOperatorInput"
QT_MOC_LITERAL(14, 238, 13), // "testRemoveRow"
QT_MOC_LITERAL(15, 252, 14) // "testReplaceRow"

    },
    "TestVariantData\0testCreation\0\0"
    "testAddEmptyRow\0testAddOneRow\0"
    "testAddOneRowUsingOneElement\0testAddRows\0"
    "testClearEmptyData\0testClearNotEmptyData\0"
    "testInsertRows\0testCompareForEquality\0"
    "testCopyConstruction\0testCopyAssignment\0"
    "testOperatorInput\0testRemoveRow\0"
    "testReplaceRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestVariantData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void TestVariantData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestVariantData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testCreation(); break;
        case 1: _t->testAddEmptyRow(); break;
        case 2: _t->testAddOneRow(); break;
        case 3: _t->testAddOneRowUsingOneElement(); break;
        case 4: _t->testAddRows(); break;
        case 5: _t->testClearEmptyData(); break;
        case 6: _t->testClearNotEmptyData(); break;
        case 7: _t->testInsertRows(); break;
        case 8: _t->testCompareForEquality(); break;
        case 9: _t->testCopyConstruction(); break;
        case 10: _t->testCopyAssignment(); break;
        case 11: _t->testOperatorInput(); break;
        case 12: _t->testRemoveRow(); break;
        case 13: _t->testReplaceRow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestVariantData::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TestVariantData.data,
    qt_meta_data_TestVariantData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestVariantData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestVariantData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestVariantData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestVariantData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
