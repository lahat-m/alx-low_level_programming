#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: memory to be occupy
 * @b: value
 * *@n: byte to change
 *
 * Return: *s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
