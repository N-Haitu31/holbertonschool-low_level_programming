#include "main.h"

/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */

void print_triangle(int size)

{
	int i;
	int j;


	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
				for (j--; j < size; j++)
				{
					_putchar('#');
				}
				if (i < (size - 1))
				{
				_putchar('\n');
				}
		}
			_putchar('\n');
	}
}
