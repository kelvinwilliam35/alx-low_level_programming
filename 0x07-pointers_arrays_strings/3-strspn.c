#include "main.h"

/**
 * *_strspn - return the number of occurence of a string
 * @s: string to check
 * @accept: character to match
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int lenght = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		for (b = 0; accept[b] > '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				lenght ++;
				break; }}
		if (accept[b] == '\0')
		{
			break; }}
		return (lenght); }





