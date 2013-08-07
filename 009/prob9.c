//There exists exactly one Pythagorean
//triplet for which a + b + c = 1000.
//Find the product abc.
//
//NOT A WORKING SOLUTION!
#include <stdio.h>
#include <stdbool.h>

int
main() {
	//euclid's formula
	//a = k*(m^2 - n^2)
	//b = k*(2mn)
	//c = k*(m^2 + n^2) 
	int a, b, c;
	int sum = 0;
	int m = 2;
	int n = 1;
	int k = 1;
	bool found = false;

	while (found == false)
	{
		while (sum < 1000)
		{
			a = k*(m*m - n*n);
			b = k*(2*m*n);
			c = k*(m*m + n*n);

			sum = a + b + c;
			k++;

			printf("a=%d, b=%d, c=%d\n",a,b,c);
		}

		if (sum == 1000)
		{
			found = true;
		}
		else
		{
			sum = 0;
			k = 1;
			m++;
			n++;
		}
	}

	printf("a=%d, b=%d, c=%d\nabc=%d\n", a, b, c, a*b*c);

	return 0;
}
