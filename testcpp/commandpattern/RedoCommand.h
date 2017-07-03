/*
 * Redocommand.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef REDOCOMMAND_H_
#define REDOCOMMAND_H_

#include "ICommand.h"
#include "Reciever.h"

class RedoCommand : public ICommand
{
	Reciever m_reciever;

public:
	RedoCommand(Reciever rcvr);
	virtual ~RedoCommand();

	void execute();
};

#endif /* REDOCOMMAND_H_ */
