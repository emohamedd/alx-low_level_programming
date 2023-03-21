#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 1;

	while (i <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			printf("%c", a);
			a++;
		}
		putchar('\n');
		i++;
	}
}
