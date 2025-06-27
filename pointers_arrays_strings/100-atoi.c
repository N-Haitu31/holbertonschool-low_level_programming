#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)

{
	int result = 0;
	int sign = 1;
	int i = 0;


	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
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

			result = result * 10 + digit;
		}

		else
		{
			break;
		}
	}
	result *= sign;
	return (result);
}

