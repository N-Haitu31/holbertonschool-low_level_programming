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
	int num;
	char alph;

	for (num = 0; num <= 9; num++)

	{
		putchar(num + '0');
	}

	for (alph = 'a'; alph <= 'f'; alph++)

	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
