# 该模块使用了5.9版本中引入的新数据类型
greaterThan(QT_MINOR_VERSION, 8){
    DEFINES+=SAK_IMPORT_FILECHECKER_MODULE
}

contains(DEFINES, SAK_IMPORT_FILECHECKER_MODULE){
    INCLUDEPATH += \
        $$PWD/src

    FORMS += \
    $$PWD/src/SAKToolFileChecker.ui

    HEADERS += \
        $$PWD/src/QtCryptographicHashCalculator.hh \
    $$PWD/src/SAKToolFileChecker.hh

    SOURCES += \
        $$PWD/src/QtCryptographicHashCalculator.cc \
    $$PWD/src/SAKToolFileChecker.cc
}else {
    message("The Qt edition does not support the QCryptographicHash::Algorithm enum type, the program will not has file chcker module.")
}
