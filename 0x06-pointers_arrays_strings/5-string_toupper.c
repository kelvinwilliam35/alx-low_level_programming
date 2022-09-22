#include "main.h"

/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
*/
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] <= 'z' && str[a] >= 'a')
		{
			str[a] -= 32; }
	return (str); }

