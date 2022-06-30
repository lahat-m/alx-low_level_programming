#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc & free
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 *
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cl, *rllc;
	unsigned int i;

	if (ptr != NULL)
		cl = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (rllc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(rllc + i) = cl[i];
	}
	free(ptr);
	return (rllc);
}
