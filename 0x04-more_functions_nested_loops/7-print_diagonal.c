#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal using '\'
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
