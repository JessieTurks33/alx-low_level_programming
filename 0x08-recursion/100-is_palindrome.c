#include "main.h"

int check_palindrome(char *s, int start, int end);
int get_string_length(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, get_string_length(s)));
}

/**
 * get_string_length - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int get_string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_string_length(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}

