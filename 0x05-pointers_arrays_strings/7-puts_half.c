#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++; }
	if (a % 2 == 0)
	{
		a = a / 2; }
	else
	{
		a = (a + 1) / 2; }
	while (str[a])
	{
		_putchar(str[a]);
		a++; }
	_putchar('\n'); }
