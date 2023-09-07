#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - causes normal process termination with a status value of 98
 * @b:input
 * return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (0);
}
