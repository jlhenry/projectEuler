//What is the smallest positive number that is evenly 
//divisible by all of the numbers from 1 to 20?
#include <stdio.h>
#include <stdbool.h>

int main() 
{
	int i = 20;
	bool found = false;

	while (!found)
	{
		bool winner = true;
		int j = 0;

		i++;

		while (winner && j < 20)
		{
			j++;
			winner = i % j == 0;
		}

		if (j == 20) found = true;
	}

	printf("%d\n",i);

	return 0;
}
