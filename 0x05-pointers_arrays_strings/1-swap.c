#include <stdio.h>

/**
 *swap_int - point in a number
 *@a: variable
 *@b: variable
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
