#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @str : pointer to the string to convert
 * Return: the converted string.
 */

char *string_toupper(char *str)

{
	int letter = 0;

	while (str[letter] != '\0')
	{
		if  (str[letter] >= 97 && str[letter] <= 122)
		{
			str[letter] = str[letter] - 32;
		}

	letter++;
	}

	return (str);
}
