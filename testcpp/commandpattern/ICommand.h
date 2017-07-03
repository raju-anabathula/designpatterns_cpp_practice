/*
 * ICommand.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef COMMANDPATTERN_ICOMMAND_H_
#define COMMANDPATTERN_ICOMMAND_H_

#include <iostream>

class ICommand {
public:
	ICommand();
	virtual ~ICommand();

	virtual void execute() = 0;
};

#endif /* COMMANDPATTERN_ICOMMAND_H_ */
