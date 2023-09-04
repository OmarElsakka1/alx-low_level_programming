#include "main.h"
#include <string.h>
/**
* argstostr - concats all args of a prog
* @ac: args count
* @av: str arr of args
* Return: new concat str
*/

char *argstostr(int ac, char **av)
{
	char *res;
	int i, j, k, c = 0, total = 0;

	if (ac == 0 || !av)
		return (NULL);

	for (k = 0; k < ac; k++)
		total += (strlen(av[k]) + 1);

	res = malloc(sizeof(char) * (total + 1));

	if (!res)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			res[c] = av[i][j];
			j++;
			c++;
		}
		res[c] = '\n';
		c++;
	}
	res[c] = '\0';

	return (res);
}
