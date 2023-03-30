#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
<<<<<<< HEAD
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

=======
 **/

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
_putchar('-');
n1 = -n;
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
>>>>>>> e1ff0c3fe22290393349dbc85d554c463b919b05
