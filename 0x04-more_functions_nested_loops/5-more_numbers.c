#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = '0';
		while (ch <= '14')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
