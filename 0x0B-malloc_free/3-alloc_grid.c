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

	tab = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
