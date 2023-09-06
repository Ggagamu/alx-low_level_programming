#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **rug;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	rug = malloc(sizeof(int *) * height);

	if (rug == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		rug[i] = malloc(sizeof(int) * width);

		if (rug[i] == NULL)
		{
			for (; i >= 0; i--)
				free(rug[i]);

			free(rug);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			rug[i][j] = 0;
	}

	return (rug);
}
