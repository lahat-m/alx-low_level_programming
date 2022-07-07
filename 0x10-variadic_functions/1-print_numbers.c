#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints integers.
 * @separator: string to print.
 * @n: integers passed to func.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
