#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size 'size' and initializes it with 'c'.
 * @size: The size of the array.
 * @c: The character to assign.
 *
 * Return: Pointer to the created array, or NULL if fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

