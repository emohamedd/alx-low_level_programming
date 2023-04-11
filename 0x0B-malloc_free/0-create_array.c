#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* By EMOHAMEDD */

/**
 * create_array - The Function
 * @size:  The variable
 * @c: The Variable
 * Return: The Return value/void
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
