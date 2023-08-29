#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char *j = accept;

	while (*s != '\0')
	{
		while (*j != '\0')
		{
			if (*s == *j)
			{
				i++;
				break;
			}
			else if (*j == '\0')
			{
				return (i);
		}
		s++;
	}
	return (i);
}
