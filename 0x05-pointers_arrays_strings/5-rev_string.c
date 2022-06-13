#include "main.h"

/**
 * rev_string - reverse string
 *  @s: string
 *  Return: void
 */

void rev_string(char *s)
{
	int z, max, half;
	char first, last;

	z = 0;
	while (s[z] != '\0')
	{
		z++;
	}
	max = z - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
