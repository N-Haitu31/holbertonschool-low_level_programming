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
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

