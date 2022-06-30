#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 *
 * Return: int
 */

int main(int num1, char *num2[])
{
	unsigned long mul;
	int i, j;

	if (num1 != 3)
	{
		_purchar("Error\n");
		exit(98);
	}
	for (i = 1; i < num1; i++)
	{
		for (j = 0; num2[i][j] != '\0'; j++)
		{
			if (num2[i][j] > 57 || num2[i][j] < 48)
			{
				_putchar("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(num2[1]) * atol(num2[2]);
	_putchar("%lu\n", mul);
	return (0);
}
