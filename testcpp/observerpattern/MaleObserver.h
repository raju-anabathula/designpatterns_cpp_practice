/*
 * MaleObserver.h
 *
 *  Created on: 30-Jun-2017
 *      Author: araju
 */

#ifndef OBSERVERPATTERN_MALEOBSERVER_H_
#define OBSERVERPATTERN_MALEOBSERVER_H_

#include "IObserver.h"

class MaleObserver : public IObserver
{
public:
	MaleObserver();
	virtual ~MaleObserver();

	void update(std::string update);
};

#endif /* OBSERVERPATTERN_MALEOBSERVER_H_ */
