/****************************************************************************
** Meta object code from reading C++ file 'qprintpreviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qprintpreviewwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprintpreviewwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS = QtMocHelpers::stringData(
    "QPrintPreviewWidget",
    "paintRequested",
    "",
    "QPrinter*",
    "printer",
    "previewChanged",
    "print",
    "zoomIn",
    "zoom",
    "zoomOut",
    "setZoomFactor",
    "zoomFactor",
    "setOrientation",
    "QPageLayout::Orientation",
    "orientation",
    "setViewMode",
    "ViewMode",
    "viewMode",
    "setZoomMode",
    "ZoomMode",
    "zoomMode",
    "setCurrentPage",
    "pageNumber",
    "fitToWidth",
    "fitInView",
    "setLandscapeOrientation",
    "setPortraitOrientation",
    "setSinglePageViewMode",
    "setFacingPagesViewMode",
    "setAllPagesViewMode",
    "updatePreview",
    "_q_fit",
    "_q_updateCurrentPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[8];
    char stringdata5[15];
    char stringdata6[6];
    char stringdata7[7];
    char stringdata8[5];
    char stringdata9[8];
    char stringdata10[14];
    char stringdata11[11];
    char stringdata12[15];
    char stringdata13[25];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[12];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[15];
    char stringdata22[11];
    char stringdata23[11];
    char stringdata24[10];
    char stringdata25[24];
    char stringdata26[23];
    char stringdata27[22];
    char stringdata28[23];
    char stringdata29[20];
    char stringdata30[14];
    char stringdata31[7];
    char stringdata32[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS_t qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QPrintPreviewWidget"
        QT_MOC_LITERAL(20, 14),  // "paintRequested"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 9),  // "QPrinter*"
        QT_MOC_LITERAL(46, 7),  // "printer"
        QT_MOC_LITERAL(54, 14),  // "previewChanged"
        QT_MOC_LITERAL(69, 5),  // "print"
        QT_MOC_LITERAL(75, 6),  // "zoomIn"
        QT_MOC_LITERAL(82, 4),  // "zoom"
        QT_MOC_LITERAL(87, 7),  // "zoomOut"
        QT_MOC_LITERAL(95, 13),  // "setZoomFactor"
        QT_MOC_LITERAL(109, 10),  // "zoomFactor"
        QT_MOC_LITERAL(120, 14),  // "setOrientation"
        QT_MOC_LITERAL(135, 24),  // "QPageLayout::Orientation"
        QT_MOC_LITERAL(160, 11),  // "orientation"
        QT_MOC_LITERAL(172, 11),  // "setViewMode"
        QT_MOC_LITERAL(184, 8),  // "ViewMode"
        QT_MOC_LITERAL(193, 8),  // "viewMode"
        QT_MOC_LITERAL(202, 11),  // "setZoomMode"
        QT_MOC_LITERAL(214, 8),  // "ZoomMode"
        QT_MOC_LITERAL(223, 8),  // "zoomMode"
        QT_MOC_LITERAL(232, 14),  // "setCurrentPage"
        QT_MOC_LITERAL(247, 10),  // "pageNumber"
        QT_MOC_LITERAL(258, 10),  // "fitToWidth"
        QT_MOC_LITERAL(269, 9),  // "fitInView"
        QT_MOC_LITERAL(279, 23),  // "setLandscapeOrientation"
        QT_MOC_LITERAL(303, 22),  // "setPortraitOrientation"
        QT_MOC_LITERAL(326, 21),  // "setSinglePageViewMode"
        QT_MOC_LITERAL(348, 22),  // "setFacingPagesViewMode"
        QT_MOC_LITERAL(371, 19),  // "setAllPagesViewMode"
        QT_MOC_LITERAL(391, 13),  // "updatePreview"
        QT_MOC_LITERAL(405, 6),  // "_q_fit"
        QT_MOC_LITERAL(412, 20)   // "_q_updateCurrentPage"
    },
    "QPrintPreviewWidget",
    "paintRequested",
    "",
    "QPrinter*",
    "printer",
    "previewChanged",
    "print",
    "zoomIn",
    "zoom",
    "zoomOut",
    "setZoomFactor",
    "zoomFactor",
    "setOrientation",
    "QPageLayout::Orientation",
    "orientation",
    "setViewMode",
    "ViewMode",
    "viewMode",
    "setZoomMode",
    "ZoomMode",
    "zoomMode",
    "setCurrentPage",
    "pageNumber",
    "fitToWidth",
    "fitInView",
    "setLandscapeOrientation",
    "setPortraitOrientation",
    "setSinglePageViewMode",
    "setFacingPagesViewMode",
    "setAllPagesViewMode",
    "updatePreview",
    "_q_fit",
    "_q_updateCurrentPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPrintPreviewWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,
       5,    0,  149,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  150,    2, 0x0a,    4 /* Public */,
       7,    1,  151,    2, 0x0a,    5 /* Public */,
       7,    0,  154,    2, 0x2a,    7 /* Public | MethodCloned */,
       9,    1,  155,    2, 0x0a,    8 /* Public */,
       9,    0,  158,    2, 0x2a,   10 /* Public | MethodCloned */,
      10,    1,  159,    2, 0x0a,   11 /* Public */,
      12,    1,  162,    2, 0x0a,   13 /* Public */,
      15,    1,  165,    2, 0x0a,   15 /* Public */,
      18,    1,  168,    2, 0x0a,   17 /* Public */,
      21,    1,  171,    2, 0x0a,   19 /* Public */,
      23,    0,  174,    2, 0x0a,   21 /* Public */,
      24,    0,  175,    2, 0x0a,   22 /* Public */,
      25,    0,  176,    2, 0x0a,   23 /* Public */,
      26,    0,  177,    2, 0x0a,   24 /* Public */,
      27,    0,  178,    2, 0x0a,   25 /* Public */,
      28,    0,  179,    2, 0x0a,   26 /* Public */,
      29,    0,  180,    2, 0x0a,   27 /* Public */,
      30,    0,  181,    2, 0x0a,   28 /* Public */,
      31,    0,  182,    2, 0x08,   29 /* Private */,
      32,    0,  183,    2, 0x08,   30 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,   22,
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

Q_CONSTINIT const QMetaObject QPrintPreviewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPrintPreviewWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPrintPreviewWidget, std::true_type>,
        // method 'paintRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPrinter *, std::false_type>,
        // method 'previewChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'print'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setZoomFactor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setOrientation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPageLayout::Orientation, std::false_type>,
        // method 'setViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ViewMode, std::false_type>,
        // method 'setZoomMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ZoomMode, std::false_type>,
        // method 'setCurrentPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fitToWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fitInView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLandscapeOrientation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPortraitOrientation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSinglePageViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFacingPagesViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAllPagesViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updatePreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_fit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_updateCurrentPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPrintPreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPrintPreviewWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->paintRequested((*reinterpret_cast< std::add_pointer_t<QPrinter*>>(_a[1]))); break;
        case 1: _t->previewChanged(); break;
        case 2: _t->print(); break;
        case 3: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 4: _t->zoomIn(); break;
        case 5: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->zoomOut(); break;
        case 7: _t->setZoomFactor((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->setOrientation((*reinterpret_cast< std::add_pointer_t<QPageLayout::Orientation>>(_a[1]))); break;
        case 9: _t->setViewMode((*reinterpret_cast< std::add_pointer_t<ViewMode>>(_a[1]))); break;
        case 10: _t->setZoomMode((*reinterpret_cast< std::add_pointer_t<ZoomMode>>(_a[1]))); break;
        case 11: _t->setCurrentPage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->fitToWidth(); break;
        case 13: _t->fitInView(); break;
        case 14: _t->setLandscapeOrientation(); break;
        case 15: _t->setPortraitOrientation(); break;
        case 16: _t->setSinglePageViewMode(); break;
        case 17: _t->setFacingPagesViewMode(); break;
        case 18: _t->setAllPagesViewMode(); break;
        case 19: _t->updatePreview(); break;
        case 20: _t->d_func()->_q_fit(); break;
        case 21: _t->d_func()->_q_updateCurrentPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPageLayout::Orientation >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPrintPreviewWidget::*)(QPrinter * );
            if (_t _q_method = &QPrintPreviewWidget::paintRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPrintPreviewWidget::*)();
            if (_t _q_method = &QPrintPreviewWidget::previewChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QPrintPreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPrintPreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPrintPreviewWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QPrintPreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QPrintPreviewWidget::paintRequested(QPrinter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPrintPreviewWidget::previewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
