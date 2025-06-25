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
	/*(Ex: si len=6, n=3). Cela représente l'index de début de la deuxième moitié*/

	}

	else
	{
		n = (len + 1) / 2; /*Longueur impaire*/
	/*'n' est défini comme la moitié supérieure de la longueur*/
	/*(Ex: si len=5, (5+1)/2 = 3. Si len=7, (7+1)/2 = 4)*/
	/*l'index de début de la deuxième moitié (incluant le caractère du milieu)*/

	}

	while (n < i) /*la valeur de 'n' (notre index de départ pour l'impression)*/
	/*est inférieure à la valeur actuelle de 'i' (qui est égale à 'len' ici)*/
	/*la boucle imprime les caractères de l'index 'n' jusqu'à 'len - 1'*/		
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
