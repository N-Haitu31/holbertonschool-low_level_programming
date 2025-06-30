#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area 's'
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

/*Remplit les n premiers octets pointés par s avec le byte constant b*/
	for (i = 0; i <  n; i++)
	{
		s[i] = b; /*Assigne le byte constant b à chaque position jusqu'à n*/
	}

	return (s); /*Retourne un pointeur vers la mémoire modifiée*/
}
