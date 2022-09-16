#include "main.h"

/**
 * print_line - main entry
 *
 * @n: integer variable
 * Description: function that draws a straight line in the terminal
 * Return: void
 */

void print_line(int n)
{
	int cont;

	if (n > 0)
	{
		for (cont = 0; cont < n; cont++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
