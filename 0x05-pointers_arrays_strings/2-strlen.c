#include "main.h"
/**
 * _strlen - function that returns the length of a strin.
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int strlen = 0;

	for (; *s++;)
		strlen++;
	return (strlen);
}
