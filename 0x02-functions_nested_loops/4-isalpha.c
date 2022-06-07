#include "main.h"
/**
 * _isalpha - display 1 if the input is c letter
 * Another cases, displays 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for letters. 0 ofr others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
