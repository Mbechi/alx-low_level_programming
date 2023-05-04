#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointing to the num to change
 * @index: index of bit to clear
 * Return: 1 if successful or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (0);
}
