#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - fonction
 * @width: param
 * @height: param
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **tab;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);

	if (tab == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);

		if (tab[i] == 0)
		{
			for (i = 0; i < height; i++)
				free(tab[i]);
			free (tab);

		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
