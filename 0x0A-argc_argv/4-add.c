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
		if (s[i] >= '0' && s[i] <= '9')
			return (0);
		i++;
	}
	return (1);

}


/* By EMOHAMEDD */

/**
 * main  - The Function
 * @c:  The variable
 * @v: The variable
 * Return: The Return value/void
 */

int main(int c, char **v)
{
	int i = 1;
	int sum = 0;

	if (c == 1)
	{
		printf("0\n");
		return (0);
	}
	while (v[i])
	{
		if (is_valid_number(v[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(v[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
