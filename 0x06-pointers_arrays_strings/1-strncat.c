#include "main.h"
<<<<<<< HEAD
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

=======

/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
int m;
int i;

m = 0;

for (i = 0; i < 1000; i++)
{
if (dest[i] == '\0')
{
break;
}
m++;
}

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[m + i] = src[i];
}
dest[m + i] = '\0';
return (dest);
}
>>>>>>> e1ff0c3fe22290393349dbc85d554c463b919b05
