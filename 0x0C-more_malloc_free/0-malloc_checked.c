#include "main.h"
/**
 * malloc_checked - allocates memory and checks for failure
 * @b:input
 * return: ptr
 */
void *malloc_checked(unsigned int b)
{
	unsigned int b;

	void *ptr = malloc(b);
	if ptr == NULL
	{
		exit(98);
	}
	return (ptr);
}
