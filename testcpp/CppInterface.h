/*
 * CppInterface.h
 *
 *  Created on: 09-May-2017
 *      Author: araju
 */

#ifndef CPPINTERFACE_H_
#define CPPINTERFACE_H_


class CppInterface
{
public:
	CppInterface(){};
	virtual ~CppInterface(){};

	virtual void sum() = 0;
};


#endif /* CPPINTERFACE_H_ */
