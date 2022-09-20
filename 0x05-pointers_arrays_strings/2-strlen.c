#include "main.h"

/**
 * _strlen - str lenght
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
