#include "main.h"

/**
 * print_square - main entry
 *
 * @size: integer
 * Description: prints a square followed by a new line
 * Return: void
 */

void print_square(int size)
{
	int lines, column;

	if (size > 0)
	{
		for (lines = 0; lines < size; lines++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
