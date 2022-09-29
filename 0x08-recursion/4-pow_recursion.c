#include "main.h"

/**
 * _pow_recursion- function that return raised to power
 * @x: the first number
 * @y: the second number
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
return (x * _pow_recursion(x, y - 1));
}
