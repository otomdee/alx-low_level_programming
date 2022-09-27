#include "main.h"

/**
 * _memcpy - copy mem area
 * @dest: dest meme area
 * @src: source mem area
 * @n: byte from mem
 * Return: mem repl
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
