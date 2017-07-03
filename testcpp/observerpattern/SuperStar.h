/*
 * SuperStar.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef OBSERVERPATTERN_SUPERSTAR_H_
#define OBSERVERPATTERN_SUPERSTAR_H_

#include "ISubject.h"
#include "IObserver.h"
#include <list>

class SuperStar : public ISubject
{
private:
	std::list<IObserver*> m_listObservers;
	std::string m_statusUpdate;
public:
	SuperStar();
	virtual ~SuperStar();

	void subscribe(IObserver *ob);
	void unsubscribe(IObserver *ob);
	void notifyAllSubscribers(std::string update);

	void setStatus(std::string status);
};

#endif /* OBSERVERPATTERN_SUPERSTAR_H_ */
