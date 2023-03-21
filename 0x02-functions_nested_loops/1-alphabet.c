#include "main.h"
#include <stdio.h>

/**
*print_alphabet - prints alphabet
*Return: No return.
*/

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		printf("%c", a);
		a++;
	}
	putchar('\n');
}
