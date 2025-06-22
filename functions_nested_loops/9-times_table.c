#include "main.h"

/**
 * times_table - prints the times table from 0 - 9.
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result >= 10)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
