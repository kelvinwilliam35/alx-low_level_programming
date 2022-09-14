#include "main.h"
/**
 * print_alphabet_x10 -  prints the alphabet in lowercase 10 times followed by a new line
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
	count++;   
	}
}
