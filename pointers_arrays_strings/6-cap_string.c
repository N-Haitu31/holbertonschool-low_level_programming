#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */

char *cap_string(char *str)

{
	int w = 0;
	int capitalize_next = 0;

	while (str[w] != '\0')
	{
		if (str[w] == ' ' || str[w] == '\t' || str[w] == '\n' ||
		str[w] == ',' || str[w] == ';' || str[w] == '.' ||
		str[w] == '!' || str[w] == '?' || str[w] == '"' ||
		str[w] == '(' || str[w] == ')' || str[w] == '{' || str[w] == '}')
		{
			capitalize_next = 1;
		}

		else if (capitalize_next && (str[w] >= 'a' && str[w] <= 'z'))
		{
			str[w] = str[w] - 32;
			capitalize_next = 0;
		}

		else
		{
			capitalize_next = 0;
		}
		w++;
	}
	return (str);
}

