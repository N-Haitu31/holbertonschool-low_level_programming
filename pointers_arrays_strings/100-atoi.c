#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)

{
	short boolean;
	int result = 0;
	int sign = 1;
	int i = 0;

	boolean = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			boolean = 1;
			result = result * 10 + digit;
		}

		else if (boolean == 1)

			break;

	}
	result *= sign;
	return (result);
}

