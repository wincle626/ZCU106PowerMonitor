/****************************************************************************
** Meta object code from reading C++ file 'qchartviewer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../PowerMonitor/qchartviewer.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchartviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_QChartViewer_t {
    uint offsetsAndSizes[28];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[10];
    char stringdata7[11];
    char stringdata8[13];
    char stringdata9[15];
    char stringdata10[16];
    char stringdata11[8];
    char stringdata12[18];
    char stringdata13[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QChartViewer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QChartViewer_t qt_meta_stringdata_QChartViewer = {
    {
        QT_MOC_LITERAL(0, 12),  // "QChartViewer"
        QT_MOC_LITERAL(13, 15),  // "viewPortChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 7),  // "clicked"
        QT_MOC_LITERAL(38, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(51, 5),  // "event"
        QT_MOC_LITERAL(57, 9),  // "mouseMove"
        QT_MOC_LITERAL(67, 10),  // "mouseWheel"
        QT_MOC_LITERAL(78, 12),  // "QWheelEvent*"
        QT_MOC_LITERAL(91, 14),  // "mouseMoveChart"
        QT_MOC_LITERAL(106, 15),  // "mouseLeaveChart"
        QT_MOC_LITERAL(122, 7),  // "QEvent*"
        QT_MOC_LITERAL(130, 17),  // "mouseMovePlotArea"
        QT_MOC_LITERAL(148, 18)   // "mouseLeavePlotArea"
    },
    "QChartViewer",
    "viewPortChanged",
    "",
    "clicked",
    "QMouseEvent*",
    "event",
    "mouseMove",
    "mouseWheel",
    "QWheelEvent*",
    "mouseMoveChart",
    "mouseLeaveChart",
    "QEvent*",
    "mouseMovePlotArea",
    "mouseLeavePlotArea"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QChartViewer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    1,   63,    2, 0x06,    2 /* Public */,
       6,    1,   66,    2, 0x06,    4 /* Public */,
       7,    1,   69,    2, 0x06,    6 /* Public */,
       9,    1,   72,    2, 0x06,    8 /* Public */,
      10,    1,   75,    2, 0x06,   10 /* Public */,
      12,    1,   78,    2, 0x06,   12 /* Public */,
      13,    1,   81,    2, 0x06,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 11,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 11,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject QChartViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QChartImage::staticMetaObject>(),
    qt_meta_stringdata_QChartViewer.offsetsAndSizes,
    qt_meta_data_QChartViewer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QChartViewer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QChartViewer, std::true_type>,
        // method 'viewPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseWheel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWheelEvent *, std::false_type>,
        // method 'mouseMoveChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseLeaveChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>,
        // method 'mouseMovePlotArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseLeavePlotArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>
    >,
    nullptr
} };

void QChartViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QChartViewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewPortChanged(); break;
        case 1: _t->clicked((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 3: _t->mouseWheel((*reinterpret_cast< std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        case 4: _t->mouseMoveChart((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 5: _t->mouseLeaveChart((*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 6: _t->mouseMovePlotArea((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 7: _t->mouseLeavePlotArea((*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QChartViewer::*)();
            if (_t _q_method = &QChartViewer::viewPortChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QMouseEvent * );
            if (_t _q_method = &QChartViewer::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QMouseEvent * );
            if (_t _q_method = &QChartViewer::mouseMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QWheelEvent * );
            if (_t _q_method = &QChartViewer::mouseWheel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QMouseEvent * );
            if (_t _q_method = &QChartViewer::mouseMoveChart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QEvent * );
            if (_t _q_method = &QChartViewer::mouseLeaveChart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QMouseEvent * );
            if (_t _q_method = &QChartViewer::mouseMovePlotArea; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QChartViewer::*)(QEvent * );
            if (_t _q_method = &QChartViewer::mouseLeavePlotArea; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *QChartViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QChartViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QChartViewer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ViewPortManager"))
        return static_cast< ViewPortManager*>(this);
    return QChartImage::qt_metacast(_clname);
}

int QChartViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChartImage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QChartViewer::viewPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QChartViewer::clicked(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QChartViewer::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QChartViewer::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QChartViewer::mouseMoveChart(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QChartViewer::mouseLeaveChart(QEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QChartViewer::mouseMovePlotArea(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QChartViewer::mouseLeavePlotArea(QEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
namespace {
struct qt_meta_stringdata_QViewPortControl_t {
    uint offsetsAndSizes[6];
    char stringdata0[17];
    char stringdata1[18];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QViewPortControl_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QViewPortControl_t qt_meta_stringdata_QViewPortControl = {
    {
        QT_MOC_LITERAL(0, 16),  // "QViewPortControl"
        QT_MOC_LITERAL(17, 17),  // "onViewPortChanged"
        QT_MOC_LITERAL(35, 0)   // ""
    },
    "QViewPortControl",
    "onViewPortChanged",
    ""
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QViewPortControl[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QViewPortControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QChartImage::staticMetaObject>(),
    qt_meta_stringdata_QViewPortControl.offsetsAndSizes,
    qt_meta_data_QViewPortControl,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QViewPortControl_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QViewPortControl, std::true_type>,
        // method 'onViewPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QViewPortControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QViewPortControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onViewPortChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QViewPortControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QViewPortControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QViewPortControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ViewPortControlBase"))
        return static_cast< ViewPortControlBase*>(this);
    return QChartImage::qt_metacast(_clname);
}

int QViewPortControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChartImage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
