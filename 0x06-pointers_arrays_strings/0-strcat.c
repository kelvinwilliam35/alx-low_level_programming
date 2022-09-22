
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] && dest[a] != '\0')
	{
		a++; }
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++; }
	dest[a] = '\0';
	return (dest); }
