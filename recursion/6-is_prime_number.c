#include "main.h"
#include <stdio.h>

/**
  * is_prime_number_helper  - checks recursively the input from is_prime_number
  * @n: iterator
  * @divisor: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime_number_helper(int n, int divisor)

{
	if (n < 2)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, divisor + 1));
}

/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime_number(int n)

{
	return (is_prime_number_helper(n, 2));
}
