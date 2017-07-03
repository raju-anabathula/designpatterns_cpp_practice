/*
 * ClassAdapter.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef ADAPTERPATTERN_CLASSADAPTER_H_
#define ADAPTERPATTERN_CLASSADAPTER_H_

#include "IntegerValue.h"

class ClassAdapter : public IntegerValue
{
public:
	ClassAdapter();
	virtual ~ClassAdapter();

	int getInteger();
};

#endif /* ADAPTERPATTERN_CLASSADAPTER_H_ */
