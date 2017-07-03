/*
 * Redocommand.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "RedoCommand.h"

RedoCommand::RedoCommand(Reciever rcvr) : m_reciever(rcvr)
{

}

RedoCommand::~RedoCommand() {
	// TODO Auto-generated destructor stub
}

void RedoCommand::execute()
{
	m_reciever.performRedo();
}
