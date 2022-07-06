#include <stdlib.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *));
/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to function.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
