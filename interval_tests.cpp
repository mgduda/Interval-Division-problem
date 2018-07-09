#include <iostream>
#include "TimeInterval.h"

using namespace std;

/**
 * \brief Divides one time interval by another
 *
 * Given two TimeInterval objects -- a numerator and a denominator -- computes 
 * the quotient (as a long integer) and the remainder (as another TimeInterval)
 * when numerator is divided by denominator.
 *
 */
void divide(const TimeInterval &numerator,
            const TimeInterval &denominator,
            long &quotient,
            TimeInterval &remainder)
{

	//
	// Replace the dummy code below with your own
	//
	quotient = 42;
	remainder.setInterval(42, 42, 42);
}


int main(int argc, char **argv)
{
	TimeInterval numerator;
	TimeInterval denominator;
	TimeInterval remainder;
	long quotient;

	//
	// Add tests here to verify the correctness of your implementation
	// of interval division
	//

	numerator.setInterval(365, 0, 0);	// 365 days, 0.0 s
	denominator.setInterval(0, 1, 0);	// 0 days, 1.0 s

	divide(numerator, denominator, quotient, remainder);

	cout << denominator << " divides " << numerator << " " << quotient << " times with a remainder of " << remainder << endl;

	return 0;
}
