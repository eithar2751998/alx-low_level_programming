#include "main.h"

/**
 * print_alphabet - Print alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
void print_alphabet(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
		_putchar(le);

	_putchar('\n');
}

