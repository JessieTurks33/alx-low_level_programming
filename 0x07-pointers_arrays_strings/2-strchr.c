#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s:string
 * @c:char
 * Return: pointer to char*
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}

