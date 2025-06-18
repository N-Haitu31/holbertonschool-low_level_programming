#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)

{
	char ch; /*type variable*/

	ch = 'z'; /*déclaration variable*/

	while (ch >= 'a')

	{
		putchar (ch);
		ch--; /*décrémentation*/
	}

	putchar('\n');

	return (0);
}
