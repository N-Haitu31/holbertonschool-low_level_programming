#include "main.h"
/**
 * print_square - draws a square using multiple terminal lines and #'s.
 * @size: the size of the square.
 */

void print_square(int size)

{
	int i;
	int j;

	if (size <=  0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
