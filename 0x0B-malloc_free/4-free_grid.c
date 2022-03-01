#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - fonction
 * @grid: param
 * @height: param
 * Return: rien
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
