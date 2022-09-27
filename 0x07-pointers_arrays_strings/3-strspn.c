#include "main.h"

/**
 * _strspn - gets length of prefix
 * @s: str to check
 * @accept: str to check against
 * Return: num of bytes of s in accept
 */

unsigned int _strspn(char *s, char 8accept)
{
	unsigned int i, j;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j]; j++)
				break;
		}
		if (!accpet[j])
			break;
	}
	return (i);
}
