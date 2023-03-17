#include <stdio.h>
/**
  *main - entry point
  *Description: print lowercase alphabet q e
  *Return: always 0
  */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 'q' || i == 'e')
			i++;
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
