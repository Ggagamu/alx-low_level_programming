#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet.
 * Return: 0 to show success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n + '0');
	}	
	putchar('\n');
	return (0);
}
