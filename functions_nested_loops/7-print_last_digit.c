#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)

{
	int r;

	/* Calcule le dernier chiffre. Si n est négatif, r sera négatif ou nul*/
	r = n % 10;

	/*Si le dernier chiffre est négatif (ce qui arrive si n était négatif),*/
	/*on le rend positif. Cette ligne est CRUCIALE pour les nombres négatifs.*/
	if (r < 0)
		r = -r;

	_putchar (r + '0'); /*Affiche le chiffre converti en caractère*/

	return (r);
}
