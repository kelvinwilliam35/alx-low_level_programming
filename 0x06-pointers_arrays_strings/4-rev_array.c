#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: array length
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0, count, k;
	int c;

	count = n - 1;
	k = count / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[count];
		a[count] = a[c];
		i++;
		count--; }}
