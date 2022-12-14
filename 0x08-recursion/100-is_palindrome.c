#include "main.h"

/**
 * _strlen_recursion - returns the last index of a string
 * @s: pointer the string
 * Return: int
 */
int _strlen_recursion(char *s)
	{
	int a = 0;

	if (*s > '\0')
		a += 1 + _strlen_recursion(s + 1);
	return (a); }

/**
 * check - checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int pair)
	{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (check(s, start + 1, end - 1, pair)); }

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
	{
	int end = _strlen_recursion(s);

	return (check(s, 0, end - 1, end % 2)); }
