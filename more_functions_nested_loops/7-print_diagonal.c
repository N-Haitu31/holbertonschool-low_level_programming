#include "main.h"
/**
 * print_diagonal - draws a diagonale line on the terminal.
 * @n: the number of backslash to print.
 */

void print_diagonal(int n)

{
	int i; /* i compteur dans notre boucle*/
	int j;/*j compteur dans une autre boucle*/

	if (n <= 0) /* condition si vraie: pas de diagonale*/
	{
		_putchar('\n');
		return; /*la fonction se termine sans exécuter le reste*/
	}
	for (i = 0; i < n; i++) /*init à 0, la boucle s'exécutera n fois*/
	{
		for (j = 0; j < i; j++)
		/*boucle imprime des ' ' avant d'imprimer des char,*/
		/*ex: si est 3, elle imprimera 3 espaces*/
		{
			_putchar(' ');
		}
	_putchar('\\');/*double"\\" pour assurer le \ en sortie */
	_putchar('\n');/*chaque diagonale est imprimée sur une ligne séparée*/
	}
}
