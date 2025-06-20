#include "main.h"

/**
 * _isalpha - checks for lowercase character & upper case
 * @c: the character to checkAdd commentMore actions
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z')
	|| (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
