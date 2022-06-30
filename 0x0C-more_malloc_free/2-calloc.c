#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates mem to array.
 * @nmemb: elements.
 * @size: byte size of array
 *
 * Return: NULL if fail, otherwise, pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	p = mem;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (mem);
}
