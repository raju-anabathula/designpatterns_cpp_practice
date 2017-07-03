/*
 * IObserver.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef OBSERVERPATTERN_IOBSERVER_H_
#define OBSERVERPATTERN_IOBSERVER_H_

#include <string>
#include <iostream>

class IObserver {
public:
	IObserver();
	virtual ~IObserver();

	virtual void update(std::string update) = 0;
};

#endif /* OBSERVERPATTERN_IOBSERVER_H_ */
