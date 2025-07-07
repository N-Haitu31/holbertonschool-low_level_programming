#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0, total_size = 0, index = 0;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	total_size = len1 + len2 + 1;
	result = malloc(total_size);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[index++] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[index++] = s2[j];
	}

	result[index] = '\0';
	return (result);
}
