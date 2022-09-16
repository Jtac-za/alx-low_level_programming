#include "main.h"

/**
 * _isdigit - main entry
 * @c: integer to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
