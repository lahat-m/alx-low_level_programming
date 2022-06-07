#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: this program prints alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ch, e;

	for (ch = 0; ch <= 9; ch++)
	{
	for (e = 97; e <= 122; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
	}
}
