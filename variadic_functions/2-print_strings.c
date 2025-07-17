#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int is_first = 1;
	va_list args;
	char *current_string;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, char *);

		if (!is_first)
		{
			printf("%s", separator);
		}

		if (current_string == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", current_string);
		}

		is_first = 0;
	}

	va_end(args);
	printf("\n");
}
