#include "main.h"

/**
 * print_most_numbers -> function that prints the numbers, from 0 to 9, followed by a new line .
 * Return -> void .
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num < '10'; num++)
	{
		if (num != '2' || num != '4')
			_putchar(num);
	}
	_putchar ('/n');
}
