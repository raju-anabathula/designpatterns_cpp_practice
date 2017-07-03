/*
 * Child.h
 *
 *  Created on: 23-Feb-2017
 *      Author: araju
 */

#ifndef CHILD_H_
#define CHILD_H_

#include "Base.h"

class Child : public Base
{
public:
	Child();
	virtual ~Child();

	int add(int a, int b);

	int x;
};

#endif /* CHILD_H_ */
