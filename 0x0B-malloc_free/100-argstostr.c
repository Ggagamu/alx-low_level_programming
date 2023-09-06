#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, o, s = 0, m = 0;
	char *sic;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (o = 0; av[i][o]; o++)
			m++;
	}
	m += ac;

	sic = malloc(sizeof(char) * m + 1);
	if (sic == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (o = 0; av[i][o]; o++)
	{
		sic[s] = av[i][o];
		s++;
	}
	if (sic[s] == '\0')
	{
		sic[s++] = '\n';
	}
	}
	return (sic);
}
