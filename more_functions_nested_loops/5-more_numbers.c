#include "main.h"

/**
 * more_numbers - to print 10 times from 0 to 14
 *
 * Return: 10 times frokm 0 to 14 and followed by new line
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{

			if (j >= 10)
			{
				_putchar((j / 10) + '0');

			}
				_putchar((j % 10) + '0');

		}

	_putchar('\n');

	}
}
