#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *strD;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strD = malloc((i + j + 1 * sizeof(char)));

	if (strD == NULL)
	{
		free(strD);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strD[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strD[k] = s2[j];

	return (strD);
}
