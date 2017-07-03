/*
 * IIntegerValue.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef ADAPTERPATTERN_IINTEGERVALUE_H_
#define ADAPTERPATTERN_IINTEGERVALUE_H_

class IIntegerValue {
public:
	virtual ~IIntegerValue();

	virtual int getInteger() = 0;
};

#endif /* ADAPTERPATTERN_IINTEGERVALUE_H_ */
