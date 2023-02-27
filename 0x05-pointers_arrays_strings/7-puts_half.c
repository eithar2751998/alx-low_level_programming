#include "main.h"
/**
 * puts_half -  function that prints half of a string,.
 * @str: char to check.
 * return - 0.
 */
void puts_half(char *str)
{
	int strlen = 0, n;

	while (str[strlen] != '\0')
		strlen++;

	if (strlen + 1 % 2 != '0')
		n = (strlen -1) / 2;
	else
		n = strlen / 2;
	n++;

	for (strlen = n; str[strlen] != '\0'; strlen++)
		_putchar(str[strlen]);
	_putchar('\n');
}
