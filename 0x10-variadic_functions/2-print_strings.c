#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to print.
 * @n: strings passed to func.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *s;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(vl, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
