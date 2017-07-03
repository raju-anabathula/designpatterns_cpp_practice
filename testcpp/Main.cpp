/*
 * Main.cpp
 *
 *  Created on: 05-Jan-2017
 *      Author: araju
 */

#include <iostream>
//#include "heartBeat.h"
/*
#include <stdio.h>
#include <sstream>

#include <stdint.h>

#include "Base.h"
#include "Child.h"

#include "CppInterface.h"
*/

/*
int main(int argc, char **argv) {

//	const uint8_t RSSI_BITS_MAX_VALUE = (1 << 8) - 1;
//	const uint8_t NOT_USED_BITS_MAX_VALUE = 1 << 7;

//	std::cout << "max value:" << std::hex << std::uppercase << RSSI_BITS_MAX_VALUE;
//	std::cout << "max value:" << (int*) RSSI_BITS_MAX_VALUE;

	//std::stringstream ss;
//	ss << "0x" << std::uppercase << std::setfill('0') << std::setw(4) << std::hex << id;

//	Base *b = new Base();
//	std::cout << b->add(5, 6) << '\n';
//
//	std::cout << "Base x:" << b->x << '\n';
//
//	Child *c = new Child;
//	std::cout << c->add(5, 6) << '\n';
//
//	std::cout << "Child x:" << b->x << '\n';

//	static uint32_t ff = 0x0F0F0F0F;

//	std::cout << std::hex << std::showbase << static_cast<int>(ff) << '\n';

	std::cout << time(0) << '\n';

	int x = 0x100;

	std::cout << x << '\n';

	CppInterface arrCppInt[10];

	return 0;
}

*/


/*//template method pattern

#include "templatepattern/IBasicEngg.h"
#include "templatepattern/CSE.h"
#include "templatepattern/ECE.h"

 int main(int argc, char **argv) {

 // template pattern
	IBasicEngg *be = new CSE();

	std::cout << "CSE papers\n";
	be->papers();

	std::cout << "ECE papers\n";
	be = new ECE();
	be->papers();
}*/

/*// Split string csv format
#include <string.h>
#include <iostream>

int main()
{
	// Assuming tokens are correctly separated by delimiters
	std::string str = "\"\"a\"\"\"b\"\"\"c\"\"";
	std::string delimiters = "\"";
	std::string token;

	size_t prev = 0;
	size_t pos = str.find_first_of(delimiters, prev);

	while (pos != std::string::npos)
	{
		if (prev == pos)
		{
			token = str.substr(pos, 1);
			prev = prev + 2;
		}
		else
		{
			token = str.substr(prev, pos  - prev);
			prev = pos + 1;
		}
		// collect tokens here
		std::cout << token <<  std::endl;
		pos = str.find_first_of(delimiters, prev);
	}

	return(0);
}*/


/*// Adapter pattern ==> class adapter and object adapter
#include "adapterpattern/ClassAdapter.h"
#include "adapterpattern/ObjectAdapter.h"

int main(int argc, char **argv) {

	std::cout << "class adapter\n";

	ClassAdapter *ca = new ClassAdapter();
	std::cout << "value:" << ca->getInteger() << std::endl;

	std::cout << "object adapter\n";

	ObjectAdapter *oa = new ObjectAdapter(new IntegerValue());
	std::cout << "value:" << oa->getInteger() << std::endl;

	return 0;
}*/

/*// Observer pattern with Superstar and fans

#include "observerpattern/SuperStar.h"
#include "observerpattern/FemaleObserver.h"
#include "observerpattern/MaleObserver.h"

int main(int argc, char **argv)
{
	SuperStar *ss = new SuperStar();

	MaleObserver *mo = new MaleObserver();
	MaleObserver *mo1 = new MaleObserver();
	ss->subscribe(mo);
	ss->subscribe(mo1);

	FemaleObserver *fo = new FemaleObserver();
	ss->subscribe(fo);

	ss->setStatus("Hello fans..!");

	std::cout << "Unsubscribing\n";
	ss->unsubscribe(mo);
	ss->unsubscribe(mo1);
	ss->setStatus("Good day!");

	return 0;
}*/

/*

// command pattern ==> Undo and redo

#include "commandpattern/Reciever.h"
#include "commandpattern/Invoker.h"
#include "commandpattern/RedoCommand.h"
#include "commandpattern/UndoCommand.h"


int main(int argc, char **argv) {

	Reciever intendedReciever;

	RedoCommand *redo = new RedoCommand(intendedReciever);
	UndoCommand *undo = new UndoCommand(intendedReciever);

	Invoker inv;

	inv.executeCommand(redo);
	inv.executeCommand(undo);

	delete redo;
	delete undo;

	return 0;
}
*/

// Iterator pattern ==> Arts and science student names iterators. One follows array and another follows list data structure

#include "iteratorpattern/ArtsStream.h"
#include "iteratorpattern/ScienceStream.h"
#include "iteratorpattern/IIterator.h"


void print(iter::IIterator *itr)
{
	while(! itr->isDone())
	{
		std::cout << itr->next() << "\n";
	}
}

int main(int argc, char **argv)
{
	aggregate::IStream *arts = new aggregate::ArtsStream();
	aggregate::IStream *science = new aggregate::ScienceStream();

	iter::IIterator *itr_arts = arts->createIterator();
	iter::IIterator *itr_science = science->createIterator();

	print(itr_arts);
	print(itr_science);

	return 0;
}
