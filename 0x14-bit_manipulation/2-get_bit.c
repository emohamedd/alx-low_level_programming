#include "main.h"

/**
 *get_bit - return the value of a bit at a given index
 *@n: the number in hand to get the bit from
 *@index: the index of the bit to get
 *Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return	((n >> index) & 1);
}
