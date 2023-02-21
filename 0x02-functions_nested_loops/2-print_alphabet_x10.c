#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
    char character;
    int i;
    for (i = 0; i < 10; i++)
    {
        for (character = 'a'; character <= 'z'; character++)
        {
            _putchar(character);
        }
        _putchar('\n');
    }
}

