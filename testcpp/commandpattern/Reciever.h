/*
 * Reciever.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef COMMANDPATTERN_RECIEVER_H_
#define COMMANDPATTERN_RECIEVER_H_

class Reciever {
public:
	Reciever();
	virtual ~Reciever();

	void performUndo();
	void performRedo();
};

#endif /* COMMANDPATTERN_RECIEVER_H_ */
