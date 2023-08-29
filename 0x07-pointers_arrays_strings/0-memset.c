#include "main.h"
/**
 * *_memset - fills memory with a specific value
 * @s: pointer
 * @b: constant byte
 * @n: unsigned integer
 * return : changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
