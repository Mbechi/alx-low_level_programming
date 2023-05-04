#include "main.h"

/**
 * get_endianness - check if machine is little or big endian
 * Return: 0 if big, or 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
