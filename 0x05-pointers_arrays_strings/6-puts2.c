#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int u = 0;
	char *x = str;
	int d;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	u = longi - 1;
	for (d = 0 ; d <= u ; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}
