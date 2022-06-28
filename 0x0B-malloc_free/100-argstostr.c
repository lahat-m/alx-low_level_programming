#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all program args
 * @ac: agr counter
 * @av: agr vector
 *
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	char *aD;
	int cn, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (cn = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			cn++;
		cn++;
	}

	aD = malloc(sizeof(char) * (cn + 1));

	if (aD == NULL)
	{
		free(aD);
		return (NULL);
	}

	for (i = j = ia = 0; ia < cn; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aD[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < cn - 1)
			aD[ia] = av[i][j];
	}
	aD[ia] = '\0';

	return (aD);
}
