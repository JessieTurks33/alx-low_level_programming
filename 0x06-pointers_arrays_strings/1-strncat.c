#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i, j;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string */
	for (i = dest_len, j = 0; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];

	/* Add null terminator to the resulting string */
	dest[i] = '\0';

	return (dest);
}

