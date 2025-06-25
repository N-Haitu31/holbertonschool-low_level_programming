#include "main.h"
/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 */

void puts_half(char *str)

{
	int i = 0;
	int len = 0; /*len sera utilisée pour stocker la longueur de la chaîne*/
	int n;

	/*Compter les caractères dans la chaîne avec len*/
	while (str[i] != '\0')
	{
		len++;/*compte le nombre de caractères non nuls*/
		i++;
	}


	if (len % 2 == 0) /*longueur de la chaîne len est un nombre pair*/
	{
		n = len / 2; /*Si 'len' est pair,*/
			     /* 'n' est défini comme la moitié de la longueur*/

		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		n = (len + 1) / 2; /*Longueur impaire*/

		for (i = len - n; i > len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
