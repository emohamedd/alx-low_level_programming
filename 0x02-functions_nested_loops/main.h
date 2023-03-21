 #ifndef MAIN_H
 #define MAIN_H

 #include <stdio.h>
#include <unistd.h>
void _putchar(int c)
{
	write(1, &c, 1);
}
void	_putchar(int c);
void	print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int a);
int print_last_digit(int);
void jack_bauer(void);
#endif
