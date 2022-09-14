#include "main.h"
/**
 *_islower - Check for the lower case of Alphabet
 *
 * Return: alway returns 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
