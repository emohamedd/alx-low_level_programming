#include "main.h"

/* By EMOHAMEDD */

/**
 * free_grid - The Function
 * @grid:  The variable
 * @height: The Variable
 * Return: The Return value/void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

