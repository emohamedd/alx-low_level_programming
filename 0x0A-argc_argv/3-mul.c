#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* By EMOHAMEDD */

/**
 * main - The Function
 * @c:  The variable
 * @v: THe variable
 * Return: The Return value/void
 */

int main(int c, char **v)
{
	if (c != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(v[1]) * atoi(v[2]));
	return (0);
}
