/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicsitem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS = QtMocHelpers::stringData(
    "QGraphicsObject",
    "parentChanged",
    "",
    "opacityChanged",
    "visibleChanged",
    "enabledChanged",
    "xChanged",
    "yChanged",
    "zChanged",
    "rotationChanged",
    "scaleChanged",
    "childrenChanged",
    "widthChanged",
    "heightChanged",
    "updateMicroFocus",
    "parent",
    "QGraphicsObject*",
    "opacity",
    "enabled",
    "visible",
    "pos",
    "x",
    "y",
    "z",
    "rotation",
    "scale",
    "transformOriginPoint",
    "effect",
    "QGraphicsEffect*",
    "width",
    "height"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[16];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[16];
    char stringdata10[13];
    char stringdata11[16];
    char stringdata12[13];
    char stringdata13[14];
    char stringdata14[17];
    char stringdata15[7];
    char stringdata16[17];
    char stringdata17[8];
    char stringdata18[8];
    char stringdata19[8];
    char stringdata20[4];
    char stringdata21[2];
    char stringdata22[2];
    char stringdata23[2];
    char stringdata24[9];
    char stringdata25[6];
    char stringdata26[21];
    char stringdata27[7];
    char stringdata28[17];
    char stringdata29[6];
    char stringdata30[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS_t qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QGraphicsObject"
        QT_MOC_LITERAL(16, 13),  // "parentChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 14),  // "opacityChanged"
        QT_MOC_LITERAL(46, 14),  // "visibleChanged"
        QT_MOC_LITERAL(61, 14),  // "enabledChanged"
        QT_MOC_LITERAL(76, 8),  // "xChanged"
        QT_MOC_LITERAL(85, 8),  // "yChanged"
        QT_MOC_LITERAL(94, 8),  // "zChanged"
        QT_MOC_LITERAL(103, 15),  // "rotationChanged"
        QT_MOC_LITERAL(119, 12),  // "scaleChanged"
        QT_MOC_LITERAL(132, 15),  // "childrenChanged"
        QT_MOC_LITERAL(148, 12),  // "widthChanged"
        QT_MOC_LITERAL(161, 13),  // "heightChanged"
        QT_MOC_LITERAL(175, 16),  // "updateMicroFocus"
        QT_MOC_LITERAL(192, 6),  // "parent"
        QT_MOC_LITERAL(199, 16),  // "QGraphicsObject*"
        QT_MOC_LITERAL(216, 7),  // "opacity"
        QT_MOC_LITERAL(224, 7),  // "enabled"
        QT_MOC_LITERAL(232, 7),  // "visible"
        QT_MOC_LITERAL(240, 3),  // "pos"
        QT_MOC_LITERAL(244, 1),  // "x"
        QT_MOC_LITERAL(246, 1),  // "y"
        QT_MOC_LITERAL(248, 1),  // "z"
        QT_MOC_LITERAL(250, 8),  // "rotation"
        QT_MOC_LITERAL(259, 5),  // "scale"
        QT_MOC_LITERAL(265, 20),  // "transformOriginPoint"
        QT_MOC_LITERAL(286, 6),  // "effect"
        QT_MOC_LITERAL(293, 16),  // "QGraphicsEffect*"
        QT_MOC_LITERAL(310, 5),  // "width"
        QT_MOC_LITERAL(316, 6)   // "height"
    },
    "QGraphicsObject",
    "parentChanged",
    "",
    "opacityChanged",
    "visibleChanged",
    "enabledChanged",
    "xChanged",
    "yChanged",
    "zChanged",
    "rotationChanged",
    "scaleChanged",
    "childrenChanged",
    "widthChanged",
    "heightChanged",
    "updateMicroFocus",
    "parent",
    "QGraphicsObject*",
    "opacity",
    "enabled",
    "visible",
    "pos",
    "x",
    "y",
    "z",
    "rotation",
    "scale",
    "transformOriginPoint",
    "effect",
    "QGraphicsEffect*",
    "width",
    "height"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsObjectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      14,  105, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,   15 /* Public */,
       3,    0,   93,    2, 0x06,   16 /* Public */,
       4,    0,   94,    2, 0x06,   17 /* Public */,
       5,    0,   95,    2, 0x06,   18 /* Public */,
       6,    0,   96,    2, 0x06,   19 /* Public */,
       7,    0,   97,    2, 0x06,   20 /* Public */,
       8,    0,   98,    2, 0x06,   21 /* Public */,
       9,    0,   99,    2, 0x06,   22 /* Public */,
      10,    0,  100,    2, 0x06,   23 /* Public */,
      11,    0,  101,    2, 0x06,   24 /* Public */,
      12,    0,  102,    2, 0x06,   25 /* Public */,
      13,    0,  103,    2, 0x06,   26 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  104,    2, 0x09,   27 /* Protected */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0001400b, uint(0), 0,
      17, QMetaType::QReal, 0x00015903, uint(1), 0,
      18, QMetaType::Bool, 0x00015103, uint(3), 0,
      19, QMetaType::Bool, 0x00015903, uint(2), 0,
      20, QMetaType::QPointF, 0x00015903, uint(-1), 0,
      21, QMetaType::QReal, 0x00015903, uint(4), 0,
      22, QMetaType::QReal, 0x00015903, uint(5), 0,
      23, QMetaType::QReal, 0x00015803, uint(6), 0,
      24, QMetaType::QReal, 0x00015103, uint(7), 0,
      25, QMetaType::QReal, 0x00015103, uint(8), 0,
      26, QMetaType::QPointF, 0x00015103, uint(-1), 0,
      27, 0x80000000 | 28, 0x0001500b, uint(-1), 0,
      29, QMetaType::QReal, 0x00015907, uint(10), 0,
      30, QMetaType::QReal, 0x00015907, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsObjectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS_t,
        // property 'parent'
        QtPrivate::TypeAndForceComplete<QGraphicsObject*, std::true_type>,
        // property 'opacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pos'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'x'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'z'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'rotation'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'scale'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'transformOriginPoint'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'effect'
        QtPrivate::TypeAndForceComplete<QGraphicsEffect*, std::true_type>,
        // property 'width'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'height'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsObject, std::true_type>,
        // method 'parentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'opacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'yChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'childrenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'widthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'heightChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMicroFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->parentChanged(); break;
        case 1: _t->opacityChanged(); break;
        case 2: _t->visibleChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->xChanged(); break;
        case 5: _t->yChanged(); break;
        case 6: _t->zChanged(); break;
        case 7: _t->rotationChanged(); break;
        case 8: _t->scaleChanged(); break;
        case 9: _t->childrenChanged(); break;
        case 10: _t->widthChanged(); break;
        case 11: _t->heightChanged(); break;
        case 12: _t->updateMicroFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::parentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::opacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::enabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::xChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::yChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::zChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::rotationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::scaleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::childrenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::widthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGraphicsObject::*)();
            if (_t _q_method = &QGraphicsObject::heightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsObject* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGraphicsObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGraphicsObject**>(_v) = _t->parentObject(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->pos(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->zValue(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->scale(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = _t->transformOriginPoint(); break;
        case 11: *reinterpret_cast< QGraphicsEffect**>(_v) = _t->graphicsEffect(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->QGraphicsItem::d_func()->width(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->QGraphicsItem::d_func()->height(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGraphicsObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParentItem(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        case 1: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPos(*reinterpret_cast< QPointF*>(_v)); break;
        case 5: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setZValue(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setTransformOriginPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 11: _t->setGraphicsEffect(*reinterpret_cast< QGraphicsEffect**>(_v)); break;
        case 12: _t->QGraphicsItem::d_func()->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->QGraphicsItem::d_func()->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<QGraphicsObject *>(_o);
        (void)_t;
        switch (_id) {
        case 12: _t->QGraphicsItem::d_func()->resetWidth(); break;
        case 13: _t->QGraphicsItem::d_func()->resetHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGraphicsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsObjectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int QGraphicsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsObject::parentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGraphicsObject::opacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGraphicsObject::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGraphicsObject::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGraphicsObject::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGraphicsObject::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGraphicsObject::zChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGraphicsObject::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGraphicsObject::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGraphicsObject::childrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGraphicsObject::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGraphicsObject::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS = QtMocHelpers::stringData(
    "QGraphicsTextItem",
    "linkActivated",
    "",
    "linkHovered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[18];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS_t qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QGraphicsTextItem"
        QT_MOC_LITERAL(18, 13),  // "linkActivated"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 11)   // "linkHovered"
    },
    "QGraphicsTextItem",
    "linkActivated",
    "",
    "linkHovered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGraphicsTextItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       3,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsTextItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGraphicsTextItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsTextItem, std::true_type>,
        // method 'linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'linkHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QGraphicsTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGraphicsTextItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->linkHovered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGraphicsTextItem::*)(const QString & );
            if (_t _q_method = &QGraphicsTextItem::linkActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGraphicsTextItem::*)(const QString & );
            if (_t _q_method = &QGraphicsTextItem::linkHovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QGraphicsTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGraphicsTextItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int QGraphicsTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsTextItem::linkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsTextItem::linkHovered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
