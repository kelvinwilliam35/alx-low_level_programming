#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int count = 0;
	int count2;

	char leet_count[5] = "aeotl";
	char leet_count2[5] = "AEOTL";
	char num[5] = "43071";

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; count2 < 5; count2++)
			{if (s[count] == leet_count[count2] || s[count] == leet_count2[count2])
				{s[count] = num[count2];
				break; }}}
	return (s); }
