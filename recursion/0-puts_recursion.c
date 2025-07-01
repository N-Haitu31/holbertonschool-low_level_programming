#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s); /*Affiche le caractère actuel*/
	_puts_recursion(s + 1); /*Appel récursif avec le caractère suivant*/
	}

	else /*Cas de base : le terminateur nul est atteint*/
	{
		_putchar('\n');
	}
}
