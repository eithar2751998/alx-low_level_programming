#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * and uppercase
 * Return: Always 0.
 */
int main(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
		putchar(lo);

	putchar('\n');
	
	for (lo = 'A'; lo <= 'Z'; lo++)
		putchar(lo);

	return (0);
}
