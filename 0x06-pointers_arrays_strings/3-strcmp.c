#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Difference between corresponding characters of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}

