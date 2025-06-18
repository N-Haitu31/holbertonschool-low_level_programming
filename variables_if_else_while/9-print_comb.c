#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase.
 *
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)

{
	int x;

	for (x = 48; x <= 57; x++)

	{
		putchar(x);
		if (x <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
