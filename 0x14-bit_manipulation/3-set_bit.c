#include "main.h"

/**
 * set_bit - sets value of  bit to 1.
 * @n: pointer of unsigned long int.
 * @index: index of bit.
 *
 * Return: 1 else, -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
