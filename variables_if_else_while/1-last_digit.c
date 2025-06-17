#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */


int main(void)
{
	int n;

	LastDigitOf =  number % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (LastDigitOf > 5)
	{
		printf("%s and is greater than 5\n", LastDigitOf, n);
	}

	else if (LastDigitOf == 0)
	{
		printf("%s and is 0\n", LastDigitOf, n);
	}

	else
	{
		printf("%s and is less than 6 and not 0\n", LastDigitOf, n);
	}

	return (0);
}
