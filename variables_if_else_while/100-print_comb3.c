#include <stdio.h>

/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */

int main(void)
{
	int digit1;
	int digit2;


	for (digit1 = 1; digit1 <= 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 == 8 && digit2 == 9)
			{
				putchar(',');
				putchar(' ');
			}

		}



	}
	putchar('\n');

	return (0);


}
