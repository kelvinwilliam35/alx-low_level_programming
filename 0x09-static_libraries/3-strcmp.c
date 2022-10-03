#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, and s1 - s2 if not matching
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++; }
	if (s1 == s2)
	{
		return (0);}
	else
	{
		return ((int)*s1 - (int)*s2); }}
