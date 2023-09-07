#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int l = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		c = malloc(sizeof(char) * (len1 + n + 1));
	else
		c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!c)
		return (NULL);

	while (l < len1)
	{
		c[l] = s1[l];
		l++;
	}

	while (n < len2 && l < (len1 + n))
		c[l++] = s2[k++];

	while (n >= len2 && l < (len1 + len2))
		c[l++] = s2[k++];

	c[l] = '\0';

	return (c);
}
