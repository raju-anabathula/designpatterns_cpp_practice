/*
 * IBasicEngg.h
 *
 *  Created on: 23-Jun-2017
 *      Author: araju
 */

#ifndef TEMPLATEPATTERN_IBASICENGG_H_
#define TEMPLATEPATTERN_IBASICENGG_H_

class IBasicEngg {
public:
	IBasicEngg();
	virtual ~IBasicEngg();

	void papers();
	void maths();
	void softskills();
	// template method to be overridden by sub classes. If not overridden, this class method will be called by default
	virtual void specialPapers();
};

#endif /* TEMPLATEPATTERN_IBASICENGG_H_ */
