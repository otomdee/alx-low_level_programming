#include "main.h"

/**
 * _memcpy - copy mem area
 * @dest: dest meme area
 * @src: source mem area
 * @n: byte from mem
 * Return: mem repl
 */

char *_memecpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
