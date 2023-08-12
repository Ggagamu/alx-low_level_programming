#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase.
 * Return: 0 to show success.
 */
int main(void)
{
	int i;
	char n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (i -'0'; i <= '9'; i++)
		putchar(i + '0');
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
