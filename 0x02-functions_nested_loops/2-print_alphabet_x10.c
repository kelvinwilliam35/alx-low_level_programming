#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: alway returns 0
 *
 */
void print_alphabet_x10(void)
{
	char a;
	int count = 0;

	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	_putchar('\n');
	count++; }
}


