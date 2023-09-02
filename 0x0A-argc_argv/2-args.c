#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: arguments counter
 * @argv: arguments volume
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}

	return (0);
}
