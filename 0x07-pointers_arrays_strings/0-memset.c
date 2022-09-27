#include "main.h"

/**
 **_memset - fills mem
 * @s: mem area
 * @b: char
 * @n: num of times to copy
 *
 * Return: return value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i, n; i++)
	{
		s[i] = b;
	}

	return (s);
}
