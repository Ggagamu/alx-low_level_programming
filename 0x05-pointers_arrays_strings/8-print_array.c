#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @c: array name
 * @o: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *c, int o)
{
	int j;

	for (j = 0; j < (o - 1); j++)
	{
		printf("%d", c[j]);
	}
	if (j == (o - 1))
	{
		printf("%d", c[o - 1]);
	}
	printf("\n");
}
