#include <stdio.h>

/**
 *main -> print the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	for(ch; ch <= 'z' ; ch++)
	    putchar(ch);
    putchar('\n');

	return (0);
}

