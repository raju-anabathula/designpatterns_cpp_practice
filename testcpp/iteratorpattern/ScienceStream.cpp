/*
 * ScienceStream.cpp
 *
 *  Created on: 03-Jul-2017
 *      Author: araju
 */

#include "ScienceStream.h"

namespace aggregate
{

ScienceStream::ScienceStream() {
	m_listNames.push_back("Raju");
	m_listNames.push_back("Raju A");
	m_listNames.push_back("Raju Rajesh");
	m_listNames.push_back("Raju Anabathula");
}

ScienceStream::~ScienceStream() {
}

iter::IIterator* ScienceStream::createIterator()
{
	return new ScienceIterator(m_listNames);
}


ScienceStream::ScienceIterator::ScienceIterator(std::list<std::string> listNames)
{
	m_listValues = listNames;
	m_itr = m_listValues.begin();
}

ScienceStream::ScienceIterator::~ScienceIterator()
{

}

void ScienceStream::ScienceIterator::first()
{
	m_itr = m_listValues.begin();
}

std::string ScienceStream::ScienceIterator::next()
{
	return (*m_itr ++);
}

bool ScienceStream::ScienceIterator::isDone()
{
	return m_itr == m_listValues.end();
}

std::string ScienceStream::ScienceIterator::getCurrent()
{
	return (* m_itr);
}

}
