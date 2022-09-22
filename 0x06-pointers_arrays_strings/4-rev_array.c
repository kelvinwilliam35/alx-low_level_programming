#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: pointer
 * @n: array length
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int count;
	int k;
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
