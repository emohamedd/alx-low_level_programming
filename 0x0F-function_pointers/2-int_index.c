#include "function_pointers.h"
#include <unistd.h>

/* By EMOHAMEDD */

/**
 *print_name - initializes a struct
 *@name: the  value
 *@f: the value
 *Return: void
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
