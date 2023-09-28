#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 or 1; big endian or little endian respectively.
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
