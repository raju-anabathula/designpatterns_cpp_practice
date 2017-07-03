/*
 * Base.h
 *
 *  Created on: 23-Feb-2017
 *      Author: araju
 */

#ifndef BASE_H_
#define BASE_H_

class Base {
public:
	Base();
	virtual ~Base();

	virtual int add(int a, int b);

	int x;
};

#endif /* BASE_H_ */
