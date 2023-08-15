#include "main.h"
/**
 * main - Prints the alphabet in lowercase.
 * Return: 0 to show success.
 */
void print_alphabet(void)
{
	char alpabet;
	for (alphabet='a'; alphabet <= 'z'; alphabet ++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);

}
