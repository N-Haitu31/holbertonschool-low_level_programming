#include <stdio.h>
#include "main.h"
/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a.
 */
void print_array(int *a, int n)

{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n - 2; i++)
/*'n-2'? parce que si on prend le dernier car. du tableau (-1024) -> (n-1)*/
/*on ne veut pas ", " en sortie donc on décale pour prendre l'avt derniere valeur*/
		{
			printf("%d, ", a[i]);
		}
/*ici on affiche '-1024' sans ", " en sortant du 'for' en affichant*/
/*le dernier car. du tableau 'n-1'*/
		printf("%d", a[n - 1])' 
	}
	printf("\n");
}

