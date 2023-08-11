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
	char letter;
	for (letter = 'a'; letter <= 'z'; letter ++);
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
