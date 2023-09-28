#include "main.h"

/**
 * get_bit - Value of bit at a particular index.
 * @n: Decimal sample.
 * @index: Index of element.
 * Return: Value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int tib;

	tib = (n >> index);
	if (index > 32)
	return (-1);
	return (tib & 1);
}
