#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal using '\'
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\');
	}
	_putchar('\n');
}
