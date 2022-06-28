#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: storage character
 *
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *crt;
	unsigned int i;

	if (size == 0)
		return (NULL);

	crt = malloc(size * sizeof(c));

	if (crt == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		crt[i] = c;

	return (crt);
}
