#include "main.h"
/**
 * print_sign - prints sign
 * @n: int to check
 * Return: one and print
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	}
	return (-1);
}
