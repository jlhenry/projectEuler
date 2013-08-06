//Find the sum of all the multiples of 3 or 5 below 1000.
#include <stdio.h>

int 
main() {
	int sum = 0;
	int i = 0;

	while (i < 1000)
	{
		if (i % 3 == 0 || i % 5 == 0) sum = sum + i;

		i = i + 1;
	}

	printf("The sum of all the multiples of 3 or 5 below 1000 is %d.\n", sum);

	return 0;
}
