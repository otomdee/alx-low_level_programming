#include "main.h"
/**
 * print_alphabet -prints alphabets
 */

void print_alphabet(void)
{
	char alphab;

	alphab = 'a';

	while (alphab <= 'z')
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}
