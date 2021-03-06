﻿/*
 * Copyright 2018-2020 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#ifndef SAKMAINWINDOWMOREINFORMATIONDIALOG_HH
#define SAKMAINWINDOWMOREINFORMATIONDIALOG_HH

#include <QDialog>
#include <QTextBrowser>

namespace Ui {
    class SAKMainWindowMoreInformationDialog;
};
/// @brief Display information about the application(QSAK)
class SAKMainWindowMoreInformationDialog:public QDialog
{
    Q_OBJECT
public:
    SAKMainWindowMoreInformationDialog(QWidget* parent = Q_NULLPTR);
private:
    Ui::SAKMainWindowMoreInformationDialog* ui = Q_NULLPTR;
    QTextBrowser *textBrowserHistory;
};

#endif
