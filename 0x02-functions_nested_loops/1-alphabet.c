#include "main.h"
#include <stdio.h>
/**
  *main - entry point
  *Description: Task
  *Return: always 0
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
