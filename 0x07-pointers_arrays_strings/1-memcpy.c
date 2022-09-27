#include "main.h"

/**
 * *_memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a]; }
	return (dest); }
