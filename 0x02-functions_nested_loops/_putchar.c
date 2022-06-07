#include <unisd.h>
/**
 * _putchar - writes the character c tp stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set to appropriately.
 */
int _putchar(char c)
{
	return (write(, &c, 1));
}
