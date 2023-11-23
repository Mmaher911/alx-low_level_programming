#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int in;

	if (n == 0 && index < 64)
		return (0);

	for (in = 0; in <= 63; n >>= 1, in++)
	{
		if (index == in)
		{
			return (n & 1);
		}
	}

	return (-1);
}
