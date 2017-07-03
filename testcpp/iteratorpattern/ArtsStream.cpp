/*
 * ArtsStream.cpp
 *
 *  Created on: 03-Jul-2017
 *      Author: araju
 */

#include "ArtsStream.h"

#include <string.h>

namespace aggregate
{

ArtsStream::ArtsStream()
{
	m_arrNames[0] = "Raju";
	m_arrNames[1] = "Raju A";
	m_arrNames[2] = "Raju Rajesh";
	m_arrNames[3] = "Raju Anabathula";
}

ArtsStream::~ArtsStream()
{

}

iter::IIterator* ArtsStream::createIterator()
{
	return new ArtsIterator(m_arrNames);
}

ArtsStream::ArtsIterator::ArtsIterator(std::string values[10])
{
	m_position = 0;
	std::copy(values, values + 10, m_arrValues);
}

ArtsStream::ArtsIterator::~ArtsIterator()
{

}

void ArtsStream::ArtsIterator::first()
{
	m_position = 0;
}

std::string ArtsStream::ArtsIterator::next()
{
	return m_arrValues[m_position ++];
}

bool ArtsStream::ArtsIterator::isDone()
{
	return m_position >= 10;
}

std::string ArtsStream::ArtsIterator::getCurrent()
{
	return m_arrValues[m_position];
}

}
