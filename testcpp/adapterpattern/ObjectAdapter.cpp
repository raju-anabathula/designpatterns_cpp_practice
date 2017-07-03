/*
 * ObjectAdapter.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "ObjectAdapter.h"

ObjectAdapter::ObjectAdapter(IIntegerValue *intValueObj) : iObj(intValueObj)
{

}

ObjectAdapter::~ObjectAdapter() {
	delete iObj;
}

int ObjectAdapter::getInteger()
{
	return 2 + iObj->getInteger();
}
