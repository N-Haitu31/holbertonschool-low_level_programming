#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */

int is_palindrome(char *s)

{
	int length = 0;
	int lastIndex;

	if (s == NULL || *s == '\0')
	{
		return (1);
	}

	if (*(s + 1) == '\0')
	{
		return (1);
	}

	while (s[length] != '\0')
	{
		length++;
	}

	lastIndex = length - 1;

	if (s[0] != s[lastIndex])
	{
		return (0);
	}

	return (is_palindrome(s + 1));
}
