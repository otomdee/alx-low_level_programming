#include "main.h"

/**
 *_memset - fills mem
 * @s: mem area
 * @b: char
 * @n: num of times to copy
 *
 * Return: return value
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
