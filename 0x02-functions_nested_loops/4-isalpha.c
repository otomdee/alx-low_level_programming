#include "main.h"

/**
 * _isalpha - checks for alpha vhars
 * @c: char to  check
 * Return: ret
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
