#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

/*Boucle pour copier n octets de src vers dest*/
	for (i = 0; i < n; i++)
	{
/*Copie chaque octet de src à la position i vers dest*/
		dest[i] = src[i];

	}

	return (dest); /*Retourne le pointeur vers la destination après la copie*/
}
