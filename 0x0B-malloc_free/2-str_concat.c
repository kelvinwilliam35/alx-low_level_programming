#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
 */
int _strlen_recursion(char *s)
	{
	int len = 0;

	if (*s != '\0')
		len += 1 + _strlen_recursion(s + 1);
	return (len); }

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, i = 0, len2 = 0, j = 0;
	char *m;

	if (s1 == NULL)
	{
		s1 = ""; }
	if (s2 == NULL)
	{
		s2 = ""; }

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	m = malloc((len1 + len2 + 1) * sizeof(char));
	if (m == NULL)
	{
		return (NULL); }
	else
	{
		while (s1[i])
		{
			m[i] = s1[i];
			i++; }
		while (s2[j])
		{
			m[i] = s2[j];
			i++;
			j++; }
		m[i] = '\0'; }
	return (m); }
