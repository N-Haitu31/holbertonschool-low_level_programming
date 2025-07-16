#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
