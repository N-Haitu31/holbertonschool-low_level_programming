#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number
 * to the variable n each time it is executed.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if else(n < 0)
	{
		printf("%dis negative\n", n);
	}

	else
	{
		printf("%dis zero\n", n);
	}
	return (0);
}
