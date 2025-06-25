#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */

void print_rev(char *s)
{
	int i = 0;
	int len;
	/* déterminer la longueur d'une chaîne de car avec len*/
	for (len = 0; s[len] != '\0'; len++)
	{
	}
	/*parcours à l'envers, len-1 (avt dernier car), >= 0 pour le 1er car*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
