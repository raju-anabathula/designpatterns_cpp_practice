/*
 * IntegerValue.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef ADAPTERPATTERN_INTEGERVALUE_H_
#define ADAPTERPATTERN_INTEGERVALUE_H_

#include "IIntegerValue.h"

class IntegerValue : public IIntegerValue
{
public:
	IntegerValue();
	virtual ~IntegerValue();

	int getInteger();
};

#endif /* ADAPTERPATTERN_INTEGERVALUE_H_ */
