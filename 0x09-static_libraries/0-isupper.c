#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @ch: character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

