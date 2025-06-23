#include "main.h"

/**
 * print_most_numbers - to print all digit from 0 to 9 except 2 and 4
 *
 * @ i: integer
 * @ c: character
 * Return: print numbers followed with new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)

	{
		if (i != 2 && i != 4)
		_putchar(i + '0');
	}
	_putchar('\n');
}
