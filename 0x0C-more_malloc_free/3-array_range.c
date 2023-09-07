#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values 
 * @max: maximum range of values and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *rdr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	rdr = malloc(sizeof(int) * size);

	if (rdr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		rdr[i] = min++;

	return (rdr);
}
