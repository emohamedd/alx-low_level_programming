#include <stdio.h>

/**
  *main - entry point
  *Description: Task
  *Return: always 0
*/

int main(void)
{
	int i = 0;
	char *str = "_putchar\n";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
