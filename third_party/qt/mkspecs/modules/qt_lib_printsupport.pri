QT.printsupport.VERSION = 6.6.1
QT.printsupport.name = QtPrintSupport
QT.printsupport.module = QtPrintSupport
QT.printsupport.libs = $$QT_MODULE_LIB_BASE
QT.printsupport.ldflags = 
QT.printsupport.includes = $$QT_MODULE_LIB_BASE/QtPrintSupport.framework/Headers
QT.printsupport.frameworks = $$QT_MODULE_LIB_BASE
QT.printsupport.bins = $$QT_MODULE_BIN_BASE
QT.printsupport.plugin_types = printsupport
QT.printsupport.depends =  core gui widgets
QT.printsupport.uses = cups
QT.printsupport.module_config = v2 lib_bundle
QT.printsupport.DEFINES = QT_PRINTSUPPORT_LIB
QT.printsupport.enabled_features = printer printpreviewwidget
QT.printsupport.disabled_features = cups cupsjobwidget printdialog printpreviewdialog
QT_CONFIG += printer printpreviewwidget
QT_MODULES += printsupport

