#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned integer.
 * @b: String that contains binary number.
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int pos_neg = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		pos_neg = 2 * pos_neg + (b[j] - '0');
	}
	return (pos_neg);
}
