#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	insinged int i = 0;

	while (*s != '\0')
	{
		char *j = accept;

		while (j != 0)
		{
			if (*s == *j)
			{
				i++;
				break;
			}
		}
		s++;
	}
	return (i);
}
