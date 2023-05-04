#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal num
 * @n: num to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int currect;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchhar('1');
			count++;
		}
		else if (count)
			_putcar(0');
	}
	if (!count)
		_putchar('0');
}
