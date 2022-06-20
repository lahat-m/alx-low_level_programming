#include "main.h"

/**
 * _memset - fill a block of memory with value
 *
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
