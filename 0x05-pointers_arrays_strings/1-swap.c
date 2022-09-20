#include "main.h"

/**
 * swap_int - swaps values
 * @a: point
 * @b: points
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
