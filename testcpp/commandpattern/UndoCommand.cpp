/*
 * UndoCommand.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "UndoCommand.h"

UndoCommand::UndoCommand(Reciever rcvr) : m_reciever(rcvr)
{
}

UndoCommand::~UndoCommand() {
}

void UndoCommand::execute()
{
	m_reciever.performUndo();
}
