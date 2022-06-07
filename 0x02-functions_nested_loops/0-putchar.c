#include "main.h"
/**
 * main - Write _putchar
 * Description: This program print function to the screen
 * Return: 0 (Succes)
 */
int main(void)
{
int ch;
char content[9] = "here";
for (ch = 0; ch < 8; ch++)
{
_putchar(content[ch]);
}
_putchar('\n');

return (0);
}
