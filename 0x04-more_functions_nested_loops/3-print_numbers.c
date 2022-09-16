#include "main.h"

/**
 * print_numbers - main entry
 * void: integer to be checked
 *
 * Return:
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
