/*
 * Reciever.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "Reciever.h"
#include <iostream>

Reciever::Reciever() {

}

Reciever::~Reciever() {
}

void Reciever::performUndo()
{
	std::cout << "Executing undo" << std::endl;
}

void Reciever::performRedo()
{
	std::cout << "Executing Redo" << std::endl;
}
