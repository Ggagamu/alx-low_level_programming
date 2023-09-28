#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets value of bit to 0 at a particular index.
 * @n: Sample space.
 * @index: Index of element.
 * Return: 1 or -1; success or error respectfully.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
