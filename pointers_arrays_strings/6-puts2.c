#include "main.h"

/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */

void puts2(char *str)
{
	int i = 0;

	/* Boucle pour parcourir la chaîne tant que le caractère actuel*/
	/* n'est pas le caractère nul*/
	while (str[i] != '\0')
	{
		if (i % 2 == 0) /*Vérifie si l'index est pair*/
		{
			_putchar(str[i]);/*Imprime le caractère à l'index pair*/
		}

		i++;/*Incrémentation de l'index pour passer au caractère suivant*/
	}
	_putchar('\n');
}
