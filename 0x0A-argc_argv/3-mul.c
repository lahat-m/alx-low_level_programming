#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 * @argc: argument count.
 * @argv: array with command line arg
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc <= 2)
	{
		printf("Error\n");
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
