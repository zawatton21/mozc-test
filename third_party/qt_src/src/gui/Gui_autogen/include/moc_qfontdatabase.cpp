/****************************************************************************
** Meta object code from reading C++ file 'qfontdatabase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qfontdatabase.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontdatabase.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQFontDatabaseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFontDatabaseENDCLASS = QtMocHelpers::stringData(
    "QFontDatabase",
    "WritingSystem",
    "Any",
    "Latin",
    "Greek",
    "Cyrillic",
    "Armenian",
    "Hebrew",
    "Arabic",
    "Syriac",
    "Thaana",
    "Devanagari",
    "Bengali",
    "Gurmukhi",
    "Gujarati",
    "Oriya",
    "Tamil",
    "Telugu",
    "Kannada",
    "Malayalam",
    "Sinhala",
    "Thai",
    "Lao",
    "Tibetan",
    "Myanmar",
    "Georgian",
    "Khmer",
    "SimplifiedChinese",
    "TraditionalChinese",
    "Japanese",
    "Korean",
    "Vietnamese",
    "Symbol",
    "Other",
    "Ogham",
    "Runic",
    "Nko",
    "WritingSystemsCount",
    "SystemFont",
    "GeneralFont",
    "FixedFont",
    "TitleFont",
    "SmallestReadableFont"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFontDatabaseENDCLASS_t {
    uint offsetsAndSizes[86];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[4];
    char stringdata3[6];
    char stringdata4[6];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[7];
    char stringdata10[7];
    char stringdata11[11];
    char stringdata12[8];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[6];
    char stringdata16[6];
    char stringdata17[7];
    char stringdata18[8];
    char stringdata19[10];
    char stringdata20[8];
    char stringdata21[5];
    char stringdata22[4];
    char stringdata23[8];
    char stringdata24[8];
    char stringdata25[9];
    char stringdata26[6];
    char stringdata27[18];
    char stringdata28[19];
    char stringdata29[9];
    char stringdata30[7];
    char stringdata31[11];
    char stringdata32[7];
    char stringdata33[6];
    char stringdata34[6];
    char stringdata35[6];
    char stringdata36[4];
    char stringdata37[20];
    char stringdata38[11];
    char stringdata39[12];
    char stringdata40[10];
    char stringdata41[10];
    char stringdata42[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFontDatabaseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFontDatabaseENDCLASS_t qt_meta_stringdata_CLASSQFontDatabaseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QFontDatabase"
        QT_MOC_LITERAL(14, 13),  // "WritingSystem"
        QT_MOC_LITERAL(28, 3),  // "Any"
        QT_MOC_LITERAL(32, 5),  // "Latin"
        QT_MOC_LITERAL(38, 5),  // "Greek"
        QT_MOC_LITERAL(44, 8),  // "Cyrillic"
        QT_MOC_LITERAL(53, 8),  // "Armenian"
        QT_MOC_LITERAL(62, 6),  // "Hebrew"
        QT_MOC_LITERAL(69, 6),  // "Arabic"
        QT_MOC_LITERAL(76, 6),  // "Syriac"
        QT_MOC_LITERAL(83, 6),  // "Thaana"
        QT_MOC_LITERAL(90, 10),  // "Devanagari"
        QT_MOC_LITERAL(101, 7),  // "Bengali"
        QT_MOC_LITERAL(109, 8),  // "Gurmukhi"
        QT_MOC_LITERAL(118, 8),  // "Gujarati"
        QT_MOC_LITERAL(127, 5),  // "Oriya"
        QT_MOC_LITERAL(133, 5),  // "Tamil"
        QT_MOC_LITERAL(139, 6),  // "Telugu"
        QT_MOC_LITERAL(146, 7),  // "Kannada"
        QT_MOC_LITERAL(154, 9),  // "Malayalam"
        QT_MOC_LITERAL(164, 7),  // "Sinhala"
        QT_MOC_LITERAL(172, 4),  // "Thai"
        QT_MOC_LITERAL(177, 3),  // "Lao"
        QT_MOC_LITERAL(181, 7),  // "Tibetan"
        QT_MOC_LITERAL(189, 7),  // "Myanmar"
        QT_MOC_LITERAL(197, 8),  // "Georgian"
        QT_MOC_LITERAL(206, 5),  // "Khmer"
        QT_MOC_LITERAL(212, 17),  // "SimplifiedChinese"
        QT_MOC_LITERAL(230, 18),  // "TraditionalChinese"
        QT_MOC_LITERAL(249, 8),  // "Japanese"
        QT_MOC_LITERAL(258, 6),  // "Korean"
        QT_MOC_LITERAL(265, 10),  // "Vietnamese"
        QT_MOC_LITERAL(276, 6),  // "Symbol"
        QT_MOC_LITERAL(283, 5),  // "Other"
        QT_MOC_LITERAL(289, 5),  // "Ogham"
        QT_MOC_LITERAL(295, 5),  // "Runic"
        QT_MOC_LITERAL(301, 3),  // "Nko"
        QT_MOC_LITERAL(305, 19),  // "WritingSystemsCount"
        QT_MOC_LITERAL(325, 10),  // "SystemFont"
        QT_MOC_LITERAL(336, 11),  // "GeneralFont"
        QT_MOC_LITERAL(348, 9),  // "FixedFont"
        QT_MOC_LITERAL(358, 9),  // "TitleFont"
        QT_MOC_LITERAL(368, 20)   // "SmallestReadableFont"
    },
    "QFontDatabase",
    "WritingSystem",
    "Any",
    "Latin",
    "Greek",
    "Cyrillic",
    "Armenian",
    "Hebrew",
    "Arabic",
    "Syriac",
    "Thaana",
    "Devanagari",
    "Bengali",
    "Gurmukhi",
    "Gujarati",
    "Oriya",
    "Tamil",
    "Telugu",
    "Kannada",
    "Malayalam",
    "Sinhala",
    "Thai",
    "Lao",
    "Tibetan",
    "Myanmar",
    "Georgian",
    "Khmer",
    "SimplifiedChinese",
    "TraditionalChinese",
    "Japanese",
    "Korean",
    "Vietnamese",
    "Symbol",
    "Other",
    "Ogham",
    "Runic",
    "Nko",
    "WritingSystemsCount",
    "SystemFont",
    "GeneralFont",
    "FixedFont",
    "TitleFont",
    "SmallestReadableFont"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFontDatabaseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   36,   24,
      38,   38, 0x0,    4,   96,

 // enum data: key, value
       2, uint(QFontDatabase::Any),
       3, uint(QFontDatabase::Latin),
       4, uint(QFontDatabase::Greek),
       5, uint(QFontDatabase::Cyrillic),
       6, uint(QFontDatabase::Armenian),
       7, uint(QFontDatabase::Hebrew),
       8, uint(QFontDatabase::Arabic),
       9, uint(QFontDatabase::Syriac),
      10, uint(QFontDatabase::Thaana),
      11, uint(QFontDatabase::Devanagari),
      12, uint(QFontDatabase::Bengali),
      13, uint(QFontDatabase::Gurmukhi),
      14, uint(QFontDatabase::Gujarati),
      15, uint(QFontDatabase::Oriya),
      16, uint(QFontDatabase::Tamil),
      17, uint(QFontDatabase::Telugu),
      18, uint(QFontDatabase::Kannada),
      19, uint(QFontDatabase::Malayalam),
      20, uint(QFontDatabase::Sinhala),
      21, uint(QFontDatabase::Thai),
      22, uint(QFontDatabase::Lao),
      23, uint(QFontDatabase::Tibetan),
      24, uint(QFontDatabase::Myanmar),
      25, uint(QFontDatabase::Georgian),
      26, uint(QFontDatabase::Khmer),
      27, uint(QFontDatabase::SimplifiedChinese),
      28, uint(QFontDatabase::TraditionalChinese),
      29, uint(QFontDatabase::Japanese),
      30, uint(QFontDatabase::Korean),
      31, uint(QFontDatabase::Vietnamese),
      32, uint(QFontDatabase::Symbol),
      33, uint(QFontDatabase::Other),
      34, uint(QFontDatabase::Ogham),
      35, uint(QFontDatabase::Runic),
      36, uint(QFontDatabase::Nko),
      37, uint(QFontDatabase::WritingSystemsCount),
      39, uint(QFontDatabase::GeneralFont),
      40, uint(QFontDatabase::FixedFont),
      41, uint(QFontDatabase::TitleFont),
      42, uint(QFontDatabase::SmallestReadableFont),

       0        // eod
};

Q_CONSTINIT const QMetaObject QFontDatabase::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQFontDatabaseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFontDatabaseENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFontDatabaseENDCLASS_t,
        // enum 'WritingSystem'
        QtPrivate::TypeAndForceComplete<QFontDatabase::WritingSystem, std::true_type>,
        // enum 'SystemFont'
        QtPrivate::TypeAndForceComplete<QFontDatabase::SystemFont, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFontDatabase, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
