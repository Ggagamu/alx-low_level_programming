#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *uuu;
	int j, s = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	uuu = malloc(sizeof(char) * (j + 1));

	if (uuu == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		uuu[s] = str[s];

	return (uuu);
}
