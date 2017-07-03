/*
 * Invoker.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "Invoker.h"

Invoker::Invoker() {
	// TODO Auto-generated constructor stub

}

Invoker::~Invoker() {
	// TODO Auto-generated destructor stub
}

void Invoker::executeCommand(ICommand *cmd)
{
	cmd->execute();
}
