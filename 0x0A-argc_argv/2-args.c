#include <stdio.h>
/**
 * main - print args its receives.
 * @argc - agrs count.
 * @argv - array of pointer to arg string.
 *
 * Return 0.
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
