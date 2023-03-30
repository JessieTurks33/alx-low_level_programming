#include "main.h"
<<<<<<< HEAD
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}

=======

/**
 * leet - encode
 * @s: pointer to char params
 * Return: *s
 */

char *leet(char *s)
{
int i;
int j;
char l[] = "ol_ea__t";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j] || s[i] == (l[j] - 32))
{
s[i] = j + '0';
}
}
}
return (s);
}
>>>>>>> e1ff0c3fe22290393349dbc85d554c463b919b05
