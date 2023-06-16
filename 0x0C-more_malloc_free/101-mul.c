#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to be evaluated
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * print_result - prints the multiplication result
 * @result: array containing the result digits
 * @len: length of the result array
 */
void print_result(int *result, int len)
{
	int i, a = 0;

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			putchar(result[i] + '0');
	}

	if (!a)
		putchar('0');

	putchar('\n');
}

/**
 * multiply - multiplies two positive numbers
 * @s1: string representation of the first number
 * @s2: string representation of the second number
 */
void multiply(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int len = len1 + len2 + 1;
	int *result = malloc(sizeof(int) * len);
	int i, carry, digit1, digit2;

	if (!result)
		exit(1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	print_result(result, len);
	free(result);
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("%s\n", ERR_MSG);
		exit(98);
	}

	s1 = argv[1];
	s2 = argv[2];

	multiply(s1, s2);

	return (0);
}

