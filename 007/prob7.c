//What is the 10,001st prime number?
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int checkMe);

int main()
{
	int i = 1;
	int primeCount = 1;
	
	while (primeCount < 10001)
	{
		i += 2;
		if (isPrime(i)) primeCount++;
	}

	printf("%d\n",i);

	return 0;
}

bool isPrime(int checkMe)
{
	bool returnValue = true;

	if (checkMe < 2)
		returnValue = false;
	else if (checkMe == 2)
		returnValue = true;
	else
	{
		int i = 3;

		returnValue = !(checkMe % 2 == 0);

		while (i <= sqrt(checkMe) && returnValue == true)
		{
			returnValue = !(checkMe % i == 0);
			i += 2;
		}
	}

	return returnValue;
}
