/*
 * IBasicEngg.cpp
 *
 *  Created on: 23-Jun-2017
 *      Author: araju
 */

#include "IBasicEngg.h"
#include <iostream>

IBasicEngg::IBasicEngg() {
	// TODO Auto-generated constructor stub

}

IBasicEngg::~IBasicEngg() {
	// TODO Auto-generated destructor stub
}

void IBasicEngg::papers()
{
	maths();
	softskills();

	specialPapers();
}

void IBasicEngg::maths()
{
	std::cout << "Maths\n";
}

void IBasicEngg::softskills()
{
	std::cout << "Soft skills\n";
}

void IBasicEngg::specialPapers()
{
	std::cout << "No special papers\n";
}
