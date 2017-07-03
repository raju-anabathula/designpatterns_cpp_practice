/*
 * UndoCommand.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef UNDOCOMMAND_H_
#define UNDOCOMMAND_H_

#include "ICommand.h"
#include "Reciever.h"

class UndoCommand : public ICommand
{
	Reciever m_reciever;
public:
	UndoCommand(Reciever rcvr);
	virtual ~UndoCommand();

	void execute();
};

#endif /* UNDOCOMMAND_H_ */
