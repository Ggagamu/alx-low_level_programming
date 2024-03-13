#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: The array to search.
  * @size: The size the array.
  * @value: The value to search for.
  *
  * Return: -1, if the value is not found or aray is NULL.
  *         Otherwise, the first index where the value is found.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t inter, po, lation;

	if (array == NULL)
		return (-1);

	for (po = 0, lation = size - 1; lation >= po;)
	{
		inter = po + (((double)(lation - po) / (array[lation] - array[po])) *
				(value - array[po]));
		if (inter < size)
			printf("Value checked array[%ld] = [%d]\n", inter, array[inter]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", inter);
			break;
		}

		if (array[inter] == value)
			return (inter);
		if (array[inter] > value)
			lation = inter - 1;
		else
			po = inter + 1;
	}

	return (-1);
}
