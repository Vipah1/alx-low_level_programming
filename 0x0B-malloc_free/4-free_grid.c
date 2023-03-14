#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - This will free all 2D arrat
 * @grid: the 2D array
 * @height: the height of the grid
 * Description: Will free the memory of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
