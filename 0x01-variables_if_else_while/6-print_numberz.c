#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet.
 * Return: 0 to show success.
 */
int main(void)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
