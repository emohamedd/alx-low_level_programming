#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'checks if n is positive or negative'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int store;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	store = n % 10;
	if (store > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, store);
	else if (store == 0)
		printf("Last digit of %d is %d and is 0\n", n, store);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, store);
	return (0);
}
