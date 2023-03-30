#include "main.h"
<<<<<<< HEAD
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

=======

/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 *
 * Return: *s
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}
return (s);
}
>>>>>>> e1ff0c3fe22290393349dbc85d554c463b919b05
