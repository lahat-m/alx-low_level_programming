#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of parameters.
 * @n: number of arguments.
 *
 * Return: sum.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(vl, int);

	va_end(vl);

	return (sum);
}
