//Find the difference between the sum of the squares of the 
//first one hundred natural numbers and the square of the sum.
#include <stdio.h>
#include <math.h>

#define max 100

int main()
{
	int sumOfSquares = 0;
	int squareOfSums = 0;

	//find the sum of the squares
	int i = 1;

	while (i <= max)
	{
		sumOfSquares = sumOfSquares + pow(i, 2);
		squareOfSums += i;
		i++;
	}

	squareOfSums = squareOfSums * squareOfSums;

	printf("%d - %d = %d\n",squareOfSums,sumOfSquares,squareOfSums - sumOfSquares);

	return 0;
}
