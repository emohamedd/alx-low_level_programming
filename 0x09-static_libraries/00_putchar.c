#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
