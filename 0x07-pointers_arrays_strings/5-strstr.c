#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *q = needle;

		while (*m == *q && *q != '\0')
		{
			m++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}

	return (0);
}
