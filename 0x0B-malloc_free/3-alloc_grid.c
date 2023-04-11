#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - E
 * @width: ..
 * @height: ..
 * Return: ptr.
 */

int **alloc_grid(int width, int height)
{
	int x, y, z, l;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(ptr[y]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (l = 0; l < width; l++)
		{
			ptr[z][l] = 0;
		}
	}
	return (ptr);

}
