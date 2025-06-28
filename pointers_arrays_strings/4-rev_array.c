#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */

void reverse_array(int *a, int n)

{
	int start = 0; /*Init' indice de début à 0, le 1er élément du tableau*/
	int end = n - 1; /*Init' l'indice de fin à n - 1,*/
			 /*le dernier élément du tableau*/
	int temp;/*Variable temporaire pour l'échange des éléments*/

    /*Continue d'inverser tant que 'start' est moins que 'end'*/
	while (start < end)
	{
		temp = a[start]; /*Stocke l'élément à l'indice de début dans temp*/
		a[start] = a[end]; /*Remplace l'élément à l'indice de début par*/
				   /*l'élément à l'indice de fin*/
		a[end] = temp; /*Remplace l'élément à l'indice de fin par*/
			       /*la valeur stockée dans temp*/

		start++; /*Incrémente l'indice de début pour avancer vers le centre*/
		end--; /*Décrémente l'indice de fin pour également avancer*/
		       /* vers le centre*/
	}
}
