/*
 * ISubject.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef OBSERVERPATTERN_ISUBJECT_H_
#define OBSERVERPATTERN_ISUBJECT_H_

#include "IObserver.h"

class ISubject {
public:
	ISubject();
	virtual ~ISubject();

	virtual void subscribe(IObserver *ob) = 0;
	virtual void unsubscribe(IObserver *ob) = 0;
	virtual void notifyAllSubscribers(std::string update) = 0;
};

#endif /* OBSERVERPATTERN_ISUBJECT_H_ */
