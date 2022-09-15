#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from this number
 *
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = 0; a < 98; a++)
		{
			printf("%d", a);
			printf(",");
			printf(" "); }
	else 
	{
		for (a = n; a > 98; a--)
		{
			printf("%d", a);
			printf(",");
			printf(" "); }
	printf("98\n"); }}}
