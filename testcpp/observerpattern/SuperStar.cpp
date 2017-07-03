/*
 * SuperStar.cpp
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#include "SuperStar.h"

SuperStar::SuperStar() {

}

SuperStar::~SuperStar() {
}

void SuperStar::subscribe(IObserver *ob)
{
	m_listObservers.push_back(ob);
}

void SuperStar::unsubscribe(IObserver *ob)
{
	m_listObservers.remove(ob);
}

void SuperStar::notifyAllSubscribers(std::string update)
{
	std::list<IObserver*>::const_iterator itr = m_listObservers.begin();

	for( ; itr != m_listObservers.end(); ++ itr)
		(*itr)->update(update);
}


void SuperStar::setStatus(std::string update)
{
	m_statusUpdate = update;
	notifyAllSubscribers(m_statusUpdate);
}
