#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

typedef void (*print_fn)(va_list args);

/**
  * print_char - prints characters
  * @args: character to print
  */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
  * print_int - prints integers
  * @args: integer to print
  */

void print_int(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
  * print_float - prints float
  * @args: integer to print
  */

void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}

/**
  * print_string - prints string
  * @args: integer to print
  */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

		if (s == NULL)
		{
			s = "(nil)";
		}
	printf("%s", s);
}

print_fn print_functions[] = {
	print_char, print_int, print_float, print_string
};

char types[] = {'c', 'i', 'f', 's', '\0'};

/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (types[j] != '\0')
		{
			if (format[i] == types[j])
			{
				printf("%s", separator);
				print_functions[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
