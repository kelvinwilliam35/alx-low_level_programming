#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line
 * @str: The charaters to print
 *
 * Return: 1 or 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++; }
	_putchar('\n'); }
