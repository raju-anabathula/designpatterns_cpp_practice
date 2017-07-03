/*
 * ClassAdapter.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "ClassAdapter.h"

ClassAdapter::ClassAdapter() {
	// TODO Auto-generated constructor stub

}

ClassAdapter::~ClassAdapter() {
	// TODO Auto-generated destructor stub
}

int ClassAdapter::getInteger()
{
	return 2 + IntegerValue::getInteger();
}
