/*
 * ECE.h
 *
 *  Created on: 23-Jun-2017
 *      Author: araju
 */

#ifndef TEMPLATEPATTERN_ECE_H_
#define TEMPLATEPATTERN_ECE_H_

#include "IBasicEngg.h"

class ECE: public IBasicEngg {
public:
	ECE();
	virtual ~ECE();

	void specialPapers();
};

#endif /* TEMPLATEPATTERN_ECE_H_ */
