#include "main.h"

/**
 * *_strchr - returns a pointer to the first occurrence
 * @s: string to select character
 * @c: character to return first occurence
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a); }}
	return ('\0'); }
