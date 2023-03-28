#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generate random password
 * Return: Always 0 (Success)
 */

int main(void)
{
    char password[101];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#!?$";
    int i, sum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
        sum += charset[index];
    }

    password[100] = '\0';

    if (sum < 2772)
    {
        password[99] = 2772 - sum;
    }
	printf("%s", password);

    return 0;
}
