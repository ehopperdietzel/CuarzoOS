/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Code/Crystals/headers/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 0, 4), // "View"
QT_MOC_LITERAL(1, 5, 11), // "roleChanged"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "newRole"
QT_MOC_LITERAL(4, 26, 12), // "titleChanged"
QT_MOC_LITERAL(5, 39, 8), // "newTitle"
QT_MOC_LITERAL(6, 48, 14), // "opacityChanged"
QT_MOC_LITERAL(7, 63, 10) // "newOpacity"

    },
    "View\0roleChanged\0\0newRole\0titleChanged\0"
    "newTitle\0opacityChanged\0newOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::UInt,    7,

       0        // eod
};

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        View *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->opacityChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (View::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&View::roleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (View::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&View::titleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (View::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&View::opacityChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject View::staticMetaObject = {
    { &QWaylandView::staticMetaObject, qt_meta_stringdata_View.data,
      qt_meta_data_View,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View.stringdata0))
        return static_cast<void*>(const_cast< View*>(this));
    return QWaylandView::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWaylandView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void View::roleChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void View::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void View::opacityChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
