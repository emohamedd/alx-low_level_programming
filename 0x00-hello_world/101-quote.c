#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints a string the standard output using printf'
 * Return: 0
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", str);
	return (1);
}
