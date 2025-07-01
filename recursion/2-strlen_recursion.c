#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */

int _strlen_recursion(char *s)

{
	/*C'est le CAS DE BASE (condition d'arrêt de la récursion)*/
	if (*s == '\0') /*Si le caractère pointé par 's' est*/
			/* le terminateur nul ('\0')...*/
	{
		return (0); /*... cela signifie que nous avons*/
			    /* atteint la fin de la chaîne*/
	}

	else /*C'est l'APPEL RÉCURSIF (étape récursive)*/
	{
		return ((1) + _strlen_recursion(s + 1));
	}

}
