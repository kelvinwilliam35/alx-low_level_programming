#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a])
	{
		b = a;
		a++; }
	a = b++;

	while (a)
	{
		_putchar(s[a]);
		a--; }
	_putchar(s[a++]);
	_putchar('\n'); }
