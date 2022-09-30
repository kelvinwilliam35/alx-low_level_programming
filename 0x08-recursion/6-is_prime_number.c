#include "main.h"

/**
 * check_prime - function to check
 * @n: the number
 * @a: the number
 * Return: Always 0
 */
int check_prime(int n, int a)
	{
	if (n <= 1)
		return (0);
	else if (n % a == 0)
		return (0);
	else if (n % a != 1)
		return (1);
	return (check_prime(n, a + 1)); }

/**
* is_prime_number - function to check if a number is prime
*
* @n: the number
* Return: Always 0
*/
int is_prime_number(int n)
	{
	return (check_prime(n, 2)); }
