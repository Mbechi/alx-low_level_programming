#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		x = -n;
		_putchar('45');
	}

	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0')'
}
