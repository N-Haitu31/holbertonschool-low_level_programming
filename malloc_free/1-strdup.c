#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */

char *_strdup(char *str)

{
	unsigned int i;
	char *new_str;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	new_str = malloc((length + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}

	new_str[length] = '\0';

	return (new_str);

}
