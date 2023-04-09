#include <stdio.h>
#include <stdlib.h>

/* By EMOHAMEDD */

/**
 * is_valid_number - The Function
 * @s:  The variable
 * Return: The Return value/void
 */


int is_valid_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);

}


/* By EMOHAMEDD */

/**
 * main  - The Function
 * @argc:  The variable
 * @argv: The variable
 * Return: The Return value/void
 */

int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
