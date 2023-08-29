#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: unsigned integer
 * return : 0
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
