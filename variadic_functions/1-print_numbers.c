#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int is_first = 1;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int number = va_arg(args, int);

		if (!is_first && separator != NULL)
		{
			printf("%s", separator);
		}

		printf("%d", number);

		is_first = 0;
	}
	printf("\n");

	va_end(args);
}
