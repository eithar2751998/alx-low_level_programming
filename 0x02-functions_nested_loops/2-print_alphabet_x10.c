#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
    int count;
	char le;

	for (count = 0; count < 10; count++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
		_putchar('\n');
	}
}

