/*
 * prime.cpp
 *
 *  Created on: Jan 30, 2011
 *      Author: rbh
 */

#ifndef PRIME_CPP_
#define PRIME_CPP_

#include<cmath> //for floor() & sqrt()

#include "prime.h"



bool isPrime(unsigned toCheck)
{
	if (toCheck== 2)
		return true;
	if ((toCheck % 2) == 0)
		return false;
	unsigned prb = 3;
	unsigned searchLimit = floor(sqrt(toCheck)) + 1;
	bool noFactorFound = true;
	while (noFactorFound && (prb<searchLimit))
	{
	    if ((toCheck % prb) == 0)
			noFactorFound = false;
		else
			prb += 2;
	}
	return (noFactorFound);
}


#endif/* PRIME_CPP_ */
