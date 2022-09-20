#include "main.h"

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/
void rev_string(char *s)
{
	int i = 0, lenght, k;
	char c;

	while (s[i] != '\0')
	{
		i++; }
	i--;
	lenght = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[lenght];
		s[lenght] = c;
		i++;
		lenght--; }}


