//Find the largest palindrome made from the
//product of two 3-digit numbers.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(unsigned int checkMe);

int main()
{
	int i = 999;
	int j = 999;
	int largest = 0;

	while (i > 99)
	{
		while (j > 99)
		{
			if (isPalindrome(i * j) && i * j > largest) largest = i * j;
			j--;
		}

		j = 999;
		i--;
	}

	printf("%d\n",largest);

	return 0;
}

bool isPalindrome(unsigned int checkMe)
{
	bool returnValue = true;

	//convert the integer to a string
	char checkMeString[11];
	snprintf(checkMeString,sizeof(checkMeString),"%d",checkMe);

	//create counters for each end of the string
	int i = 0;
	int j = strlen(checkMeString) - 1;

	while (i < j && returnValue)
	{
		if (checkMeString[i] != checkMeString[j]) returnValue = false;

		i++;
		j--;
	}

	return returnValue;
}
