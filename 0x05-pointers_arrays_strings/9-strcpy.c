#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int w = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; w < l ; w++)
	{
		dest[w] = src[w];
	}
	dest[l] = '\0';
	return (dest);
}
