#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Description: Print out alphabet in lowercase
 * Return: void.
 */
void print_alphabet(void)
{
int ch;

for (ch = 97; ch < 123; ch++)
{
	_putchar(ch);
}
_putchar('\n');
}
