#include "main.h"

/**
 * flip_bits - Number of bits needed to be flipped from one number to another
 * @n: Sample space.
 * @m: Flipped sample space.
 * Return: bits_flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, bits_flipped = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	for (a = 0; a < b; i++)
	{
		if ((m & 1) != (n & 1))
			bits_flipped += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (bits_flipped);
}
