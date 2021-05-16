/****************************************************************************
** Meta object code from reading C++ file 'note.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "note.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'note.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Note_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Note_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Note_t qt_meta_stringdata_Note = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Note"
QT_MOC_LITERAL(1, 5, 6), // "redact"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 4), // "data"
QT_MOC_LITERAL(4, 18, 23), // "on_textEdit_textChanged"
QT_MOC_LITERAL(5, 42, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(6, 64, 31), // "on_deadline_currentIndexChanged"
QT_MOC_LITERAL(7, 96, 5), // "index"
QT_MOC_LITERAL(8, 102, 21) // "on_backButton_clicked"

    },
    "Note\0redact\0\0data\0on_textEdit_textChanged\0"
    "on_saveButton_clicked\0"
    "on_deadline_currentIndexChanged\0index\0"
    "on_backButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Note[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void Note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Note *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redact((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->on_textEdit_textChanged(); break;
        case 2: _t->on_saveButton_clicked(); break;
        case 3: _t->on_deadline_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_backButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Note::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Note.data,
    qt_meta_data_Note,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Note::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Note.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_Form"))
        return static_cast< Ui_Form*>(this);
    return QDialog::qt_metacast(_clname);
}

int Note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
