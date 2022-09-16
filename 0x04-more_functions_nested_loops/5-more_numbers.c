#include "main.h"

/**
 * more_numbers - main entry
 *
 * Description: prints 10 times the numbers form 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int cont, n;

	for (cont = 0; cont < 10; cont++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
