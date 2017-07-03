/*
 * ArtsStream.h
 *
 *  Created on: 03-Jul-2017
 *      Author: araju
 */

#ifndef ITERATORPATTERN_ARTSSTREAM_H_
#define ITERATORPATTERN_ARTSSTREAM_H_

#include "IStream.h"
#include "IIterator.h"

namespace aggregate
{

class ArtsStream : public IStream
{
private:
	std::string m_arrNames[10];

public:
	ArtsStream();
	virtual ~ArtsStream();

	iter::IIterator* createIterator();

	class ArtsIterator : public iter::IIterator
	{
	private:
		std::string m_arrValues[10];
		int m_position;

	public:
		ArtsIterator(std::string values[10]);
		virtual ~ArtsIterator();

		void first();
		std::string next();
		bool isDone();
		std::string getCurrent();
	};
};
}
#endif /* ITERATORPATTERN_ARTSSTREAM_H_ */
