#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates mem using malloc.
 * @b: bytes to allocate.
 *
 * Return: pointer or mem.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
