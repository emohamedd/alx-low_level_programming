#include "main.h"

/**
 *main - the main program
 *Return: nothing
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
