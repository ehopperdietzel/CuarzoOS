/****************************************************************************
** Meta object code from reading C++ file 'CWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Headers/CWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CWindow_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWindow_t qt_meta_stringdata_CWindow = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CWindow"
QT_MOC_LITERAL(1, 8, 15), // "positionChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "pos"
QT_MOC_LITERAL(4, 29, 12), // "titleChanged"
QT_MOC_LITERAL(5, 42, 11), // "modeChanged"
QT_MOC_LITERAL(6, 54, 14), // "opacityChanged"
QT_MOC_LITERAL(7, 69, 16) // "blurStateChanged"

    },
    "CWindow\0positionChanged\0\0pos\0titleChanged\0"
    "modeChanged\0opacityChanged\0blurStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void CWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWindow *_t = static_cast<CWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->modeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->opacityChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->blurStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWindow::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWindow::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWindow::titleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CWindow::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWindow::modeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CWindow::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWindow::opacityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWindow::blurStateChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CWindow.data,
      qt_meta_data_CWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CWindow.stringdata0))
        return static_cast<void*>(const_cast< CWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int CWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CWindow::positionChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWindow::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CWindow::modeChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CWindow::opacityChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CWindow::blurStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE