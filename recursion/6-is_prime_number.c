#include "main.h"
#include <stdio.h>

int is_prime_number_helper(int n, int divisor)

{
	if (n <= 2)
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

int is_prime_number(int n)

{
	return (is_prime_number_helper(n, 2));
}
