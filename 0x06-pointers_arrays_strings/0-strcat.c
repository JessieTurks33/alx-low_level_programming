#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i, j;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Calculate the length of the source string */
	while (src[src_len] != '\0')
		src_len++;

	/* Append the source string to the destination string */
	for (i = dest_len, j = 0; j < src_len; i++, j++)
		dest[i] = src[j];

	/* Add null terminator to the resulting string */
	dest[i] = '\0';

	return (dest);
}

