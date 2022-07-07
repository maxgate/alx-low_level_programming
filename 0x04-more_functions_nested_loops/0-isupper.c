#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	putchar("'%c' is uppercase alphabet.", c);
		return (1);

	else 
	putchar("'c' is lower alphabet.", c);
		return (0);
}
