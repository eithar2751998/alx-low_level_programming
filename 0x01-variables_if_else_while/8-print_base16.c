#include <stdio.h>

/**
 * main - Prints numbers base 16 .
 * 
 * Return: Always 0.
 */
int main(void)
{
    char ch;
    int n;
    for (n = 0; n < 10; n++)
        putchar((n % 10) + '0');
    for (ch = 'a'; ch <= 'f'; ch++)
        putchar(ch);
		
	putchar('\n');

	return (0);
}
