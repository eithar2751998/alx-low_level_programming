#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
		putchar(le);

	for (le = 'A'; le <= 'Z'; le++)
		putchar(le);

	putchar('\n');

	return (0);
}
