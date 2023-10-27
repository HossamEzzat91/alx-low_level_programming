#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 *
 * @n: pointer 
 * @index: index of the bit
 *
 * Return: 1 or -1 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | x);

	return (1);
}
