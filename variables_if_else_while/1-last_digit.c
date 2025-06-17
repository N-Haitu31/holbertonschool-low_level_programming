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

	Last_digit_of = number % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (Last_digit_of > 5)
	{
		printf("%s and is greater than 5\n", Last_digit_of, n);
	}

	else if (Last_digit_of == 0)
	{
		printf("%s and is 0\n", Last_digit_of, n);
	}

	else
	{
		printf("%s and is less than 6 and not 0\n", Last_digit_of, n);
	}

	return (0);
}
