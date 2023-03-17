#include <stdio.h>
/**
  *main - entry point
  *Description: Task
  *Return: always 0
  */
int main(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			putchar ('0' + (a / 10));
			putchar ('0' + (a % 10));
			putchar (' ');
			putchar ('0' + (b / 10));
			putchar ('0' + (b % 10));
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
