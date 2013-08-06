//What is the largest prime factor of the number 600851475143
#include <stdio.h>
#include <math.h>

int isPrime(double checkMe);

int
main() {
	double check = 600851475143.0;
	double i = 2.0;
	double largest = 0.0;

	while (i < sqrt(check))
	{
		if (fmod(check, i) == 0 && isPrime(i) == 0) largest = i;
		i++;
	}

	printf("%f\n",largest);

	return 0;
}

int isPrime(double checkMe)
{
	int returnValue = 0;
	double i = 2.0;

	while (i < sqrt(checkMe) && returnValue == 0)
	{
		if (fmod(checkMe, i) == 0) returnValue = 1;
		i++;
	}

	return returnValue;
}
