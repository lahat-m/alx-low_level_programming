#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer or NULL.
 */

char *_strdup(char *str)
{
	char *strD;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	strD = (char *)malloc(i * sizeof(char));

	if (strD == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strD[j] = str[j];

	return (strD);
}
