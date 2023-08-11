#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet
 * returns - Shows success
 */
int main(void)
{
	char n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 'a'; n <= 'z'; n ++)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}
