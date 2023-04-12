#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* By EMOHAMEDD */

/**
 * alloc_grid - The Function
 * @width:  The variable
 * @height: The Variable
 * Return: The Return value/void
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **tab;
	int k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = (int **) malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);
	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (!tab[i])
		{
			while (k <= i)
			{
				free(tab[k]);
				k++;
			}
			free(tab);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
