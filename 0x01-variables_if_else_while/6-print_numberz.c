#include <stdio.h>

/**
 * main - Prints numbers from 1 to 9 .
 * Return: Always 0.
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
	    putchar((n % 10) + '0');
	}
		
	putchar('\n');

	return (0);
}

