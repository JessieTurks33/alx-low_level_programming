#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int index = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (; index < length; index++)
	{
		dest[index] = src[index];
	}

	dest[length] = '\0';

	return (dest);
}
}
