#include "main.h"

/**
 * _strchr - locates char
 * @s: string to check
 * @c: charact
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);

	return (0);
}
