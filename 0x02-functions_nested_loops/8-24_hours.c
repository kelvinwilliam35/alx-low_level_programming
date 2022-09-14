#include "main.h"
#include<stdio.h>

/**
 *jack_bauer - a function that prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *
 *Return: On success 1.
 */
void jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1 = 0, m2 = 0;
	int n = 9;

	for (h1 = 0; h1 <= 2; h1++)
	{
		if (h1 == 2)
			n = 3;
		for (h2 = 0; h2 <= n; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n'); }}}}}

