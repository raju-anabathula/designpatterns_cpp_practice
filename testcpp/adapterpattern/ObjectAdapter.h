/*
 * ObjectAdapter.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef ADAPTERPATTERN_OBJECTADAPTER_H_
#define ADAPTERPATTERN_OBJECTADAPTER_H_

#include "IIntegerValue.h"

class ObjectAdapter
{
	IIntegerValue *iObj;

public:
	ObjectAdapter(IIntegerValue *intValueObj);
	virtual ~ObjectAdapter();

	int getInteger();
};

#endif /* ADAPTERPATTERN_OBJECTADAPTER_H_ */
