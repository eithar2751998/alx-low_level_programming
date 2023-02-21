#include "main.h"

/**
 * main - Print alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
void print_alphabet(void)
{
    char character;
    for (character = 'a'; character <= 'z'; character++)
    {
        _putchar(character);
    }
    _putchar('\n');
}

