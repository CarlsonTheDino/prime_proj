/*
 * randomPrime.cpp
 *
 *  Created on: Jan 15, 2011
 *      Author: rbh
 */

/*example source - with a main() 

*/

#include <iostream>
#include <cstdlib>  //for random functions

#include "prime.h"


int main()
{
	const int maxRandSeq = 25;
	srand( time(NULL));
	unsigned nth = rand() % maxRandSeq + 1;
	unsigned numberFound = 0;
	int probe = 1;
	do
	{
		++probe;
		if (isPrime(probe))
		{
			++numberFound;
			std::cout << probe << " is prime" << std::endl;
		}
	} while (numberFound < nth);
	std::cout << "The " << nth << " prime number is " << probe << std::endl;
}
