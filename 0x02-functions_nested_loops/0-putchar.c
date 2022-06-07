#include "main.h"

/**
 * main - print _putchar
 *
 * Descriptions: print _putchar
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int ch;
char x[] = "_putchar";

for (ch = 0; ch < 8; ch++)
{
	_putchar(x[ch]);
}
_putchar('\n');
return (0);
}
