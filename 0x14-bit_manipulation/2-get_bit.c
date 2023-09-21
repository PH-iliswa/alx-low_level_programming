#include "main.h"

/**
 * @index: index of the bit
 * @n: number to search
 * get_bit - returns the value of a bit at an index in a decimal number
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
