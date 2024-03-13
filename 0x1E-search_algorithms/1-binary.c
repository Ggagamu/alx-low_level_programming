#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array using binary search.
  * @array: The array to search.
  * @size: The size the array.
  * @value: The value to search for.
  *
  * Return: NULL or -1 if value not found.
  *         Otherwise, the index where the value is found.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, down, up;

	if (array == NULL)
		return (-1);

	for (down = 0, up = size - 1; up >= down;)
	{
		printf("Searching in array: ");
		for (i = down; i < up; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = down + (up - down) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			up = i - 1;
		else
			down = i + 1;
	}

	return (-1);
}
