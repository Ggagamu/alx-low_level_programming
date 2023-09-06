#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int a, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = len = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[len] != '\0')
		len++;
	result = malloc(sizeof(char) * (a + len + 1));

	if (result == NULL)
		return (NULL);
	a = len = 0;
	while (s1[a] != '\0')
	{
		result[a] = s1[a];
		a++;
	}

	while (s2[len] != '\0')
	{
		result[a] = s2[len];
		a++, len++;
	}
	result[a] = '\0';
	return (result);
}
