#include "main.h"

/**
 * flip_bits - count num of bits to change
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int eclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
