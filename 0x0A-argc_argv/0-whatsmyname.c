#include "main.h"
/**
 * @argc - input
 * @argv - input
 */
int main(int argc, char *argv[])
{
	for (int i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
