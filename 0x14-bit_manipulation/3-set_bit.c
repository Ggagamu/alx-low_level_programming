#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 at a particular index
 * @n: Sample space
 * @index: Index of element
 * Return: 1 or -1 depending on outcome
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
