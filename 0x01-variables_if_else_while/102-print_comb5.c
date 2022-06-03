#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{

int b, e;
for (b = 0; b < 100; b++)
{
for (e = 0; e < 100; e++)
{
if (b < e)
{
putchar((b / 10) + 48);
putchar((b % 10) + 48);
putchar(' ');
putchar((e / 10) + 48);
putchar((e % 10) + 48);
if (b != 98 || e != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
