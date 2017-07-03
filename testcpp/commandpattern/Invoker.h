/*
 * Invoker.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef COMMANDPATTERN_INVOKER_H_
#define COMMANDPATTERN_INVOKER_H_

#include "ICommand.h"

class Invoker
{
public:
	Invoker();
	virtual ~Invoker();

	void executeCommand(ICommand *cmd);
};

#endif /* COMMANDPATTERN_INVOKER_H_ */
