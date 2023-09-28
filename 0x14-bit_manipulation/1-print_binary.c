#include "main.h"

/**
 * print_binary - Prints binary representation of a number.
 * @n: sample space
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int sample;

	for (j = 63; j >= 0; j--)
	{
		sample = n >> j;

		if (sample & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
