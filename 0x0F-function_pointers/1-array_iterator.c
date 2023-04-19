#include "function_pointers.h"
#include <unistd.h>

/* By EMOHAMEDD */

/**
 *print_name - initializes a struct
 *@name: the  value
 *@f: the value
 *Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
