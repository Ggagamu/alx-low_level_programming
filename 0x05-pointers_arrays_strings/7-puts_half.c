#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, m = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int b, m, longi;

	longi = 0;

	for (b = 0; str[b] != '\0'; b++)
		longi++;

	m = (longi / 2);

	if ((longi % 2) == 1)
		m = ((longi + 1) / 2);

	for (b = m; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
