#include "main.h"
#include <stdio.h>
/**
 * print_array - update value
 * @a:array input
 * @n: n elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	int x;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
