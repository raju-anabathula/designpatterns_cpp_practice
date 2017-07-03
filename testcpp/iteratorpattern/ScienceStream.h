/*
 * ScienceStream.h
 *
 *  Created on: 03-Jul-2017
 *      Author: araju
 */

#ifndef ITERATORPATTERN_SCIENCESTREAM_H_
#define ITERATORPATTERN_SCIENCESTREAM_H_

#include "IStream.h"
#include "IIterator.h"

#include <list>
#include <string>

namespace aggregate
{

class ScienceStream : public IStream
{
private:
	std::list<std::string> m_listNames;

public:
	ScienceStream();
	virtual ~ScienceStream();

	iter::IIterator* createIterator();

	class ScienceIterator : public iter::IIterator
	{
	private:
		std::list<std::string> m_listValues;
		std::list<std::string>::iterator m_itr;
	public:
		ScienceIterator(std::list<std::string> listNames);
		virtual ~ScienceIterator();

		void first();
		std::string next();
		bool isDone();
		std::string getCurrent();
	};
};
}
#endif /* ITERATORPATTERN_SCIENCESTREAM_H_ */
