#include "main.h"

/**
*print_to_98 - adds two integers
*@n: first number
*Return: returns the sum of a and b
*/



void print_to_98(int n)
{

	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}
