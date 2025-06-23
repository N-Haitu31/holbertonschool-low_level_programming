#include "main.h"

/**
 * _isdigit - to check for a digit
 *
 * @c : value of the input
 * Return: 1 for digit and 0 if not
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
