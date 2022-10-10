#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0; a = 0;

	if (str == NULL)
	{
		return (NULL); }
	while (str[len])
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (dup != NULL)
	{
		while (str[a])
		{
			dup[a] = str[a];
			a++; }
		dup[a] = '\0'; }
	return (dup); }
