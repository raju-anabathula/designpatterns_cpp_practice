/*
 * IStream.h
 *
 *  Created on: 03-Jul-2017
 *      Author: araju
 */

#ifndef ITERATORPATTERN_ISTREAM_H_
#define ITERATORPATTERN_ISTREAM_H_

#include "IIterator.h"

namespace aggregate
{

class IStream
{
public:
	IStream();
	virtual ~IStream();

	virtual iter::IIterator* createIterator() = 0;
};

}
#endif /* ITERATORPATTERN_ISTREAM_H_ */
