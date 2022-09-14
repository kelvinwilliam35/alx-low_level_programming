#include "main.h"
/**
 *_isalpha - Check for the lower and upper case of Alphabet
 *
 * Return: alway returns 0
 *@c : character to check the case
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
