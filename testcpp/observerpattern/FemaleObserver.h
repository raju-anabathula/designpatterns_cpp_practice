/*
 * FemaleObserver.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef OBSERVERPATTERN_FEMALEOBSERVER_H_
#define OBSERVERPATTERN_FEMALEOBSERVER_H_

#include "IObserver.h"

class FemaleObserver : public IObserver
{
public:
	FemaleObserver();
	virtual ~FemaleObserver();

	void update(std::string update);
};

#endif /* OBSERVERPATTERN_FEMALEOBSERVER_H_ */
