#include "main.h"

/**
 * square - find square root
 * @n: int to find square root
 * @a: square root
 * Return: int
 */
int square (int n, int a)
	{
	if (a * a == n)
		return (a);
	else if (a * a < n)
		return (square(n, a + 1));
	else 
		return (-1); }

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
	{
	return (square(n, 1)); }
