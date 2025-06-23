#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 * Description: This function uses _putchar to
 * print the numbers.
 * from 0 to 9 followed by a new line.
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)

		_putchar(i + '0');

	_putchar('\n');

}
