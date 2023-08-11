#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet
 * returns - Shows success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char n;
	for (n = 'a'; n <= 'z'; n ++);
	{
		putchar (n)
	}
	putchar('\n');
	return (0);
}
