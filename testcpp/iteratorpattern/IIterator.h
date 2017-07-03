/*
 * IIterator.h
 *
 *  Created on: 03-Jul-2017
 *      Author: araju
 */

#ifndef ITERATORPATTERN_IITERATOR_H_
#define ITERATORPATTERN_IITERATOR_H_

#include <string>

namespace iter
{

class IIterator
{
public:
	IIterator();
	virtual ~IIterator();

	virtual void first() = 0;
	virtual std::string next() = 0;
	virtual bool isDone() = 0;
	virtual std::string getCurrent() = 0;
};

}
#endif /* ITERATORPATTERN_IITERATOR_H_ */
