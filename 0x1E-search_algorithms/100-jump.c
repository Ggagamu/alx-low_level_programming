#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: The array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: -1, if value not found or array is NULL.
  *         Otherwise, the first index where the value is found.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, hop, chunk;

	if (array == NULL || size == 0)
		return (-1);

	chunk = sqrt(size);
	for (i = hop = 0; hop < size && array[hop] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", hop, array[hop]);
		i = hop;
		hop += chunk;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, hop);

	hop = hop < size - 1 ? hop : size - 1;
	for (; i < hop && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
