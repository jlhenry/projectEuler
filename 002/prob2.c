//By considering the terms in the Fibonacci 
//sequence whose values do not exceed four million, 
//find the sum of the even-valued terms.
#include <stdio.h>

int
main() {
	//generate the fibonacci numbers that are 
	//less than 4,000,000
	int j = 0;
	int k = 1;
	int sum = 0;

	while (j < 4000000)
	{
		j += k;
		k += j;

		if (j % 2 == 0 && j < 4000000) sum += j;
		if (k % 2 == 0 && k < 4000000) sum += k;
	}

	printf("%d\n", sum);

	return 0;
}
