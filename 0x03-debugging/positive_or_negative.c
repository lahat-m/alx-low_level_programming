#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i == 0)

		printf("%d is zero\n", i);

	else if (i < 0)

		printf("%d is negative\n", i);

	else

		printf("%d is positive\n", i);
}
