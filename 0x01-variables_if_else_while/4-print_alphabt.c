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
	{
	    if(lo == 'q' || lo == 'e')
	        continue;
	    putchar(lo);
	}
		

	putchar('\n');

	return (0);
}
