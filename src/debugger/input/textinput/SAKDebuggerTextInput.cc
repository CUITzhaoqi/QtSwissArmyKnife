﻿/*
 * Copyright (C) 2020 wuuhii. All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project. The project is a open source project, you can get the source from:
 *     https://github.com/wuuhii/QtSwissArmyKnife
 *     https://gitee.com/wuuhii/QtSwissArmyKnife
 *
 * For more information about the project, please join our QQ group(952218522).
 * In addition, the email address of the project author is wuuhii@outlook.com.
 */
#include "SAKDebuggerTextInput.hh"

SAKDebuggerTextInput::SAKDebuggerTextInput(SAKDebugger *debugger, QObject *parent)
    :QObject (parent)
    ,debugger (debugger)
{

}

SAKDebuggerTextInput::~SAKDebuggerTextInput()
{

}

void SAKDebuggerTextInput::writeBytes()
{
    writeBytes(QByteArray("Hello"));
}

void SAKDebuggerTextInput::writeBytes(QByteArray bytes)
{
    emit writeBytesRequest(bytes);
}