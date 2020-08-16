﻿/*
 * Copyright 2020 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#include "SAKDebugPageCommonSslConfigurationWidget.hh"
#include "ui_SAKSslSocketCommonConfiguration.h"

SAKDebugPageCommonSslConfigurationWidget::SAKDebugPageCommonSslConfigurationWidget(QWidget *parent)
    :QWidget(parent)
    ,mUi(new Ui::SAKDebugPageCommonSslConfigurationWidget)
{
    mUi->setupUi(this);
}

SAKDebugPageCommonSslConfigurationWidget::~SAKDebugPageCommonSslConfigurationWidget()
{
    delete mUi;
}