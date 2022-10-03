#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring needle in the string haystack.
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
        int a;
        int b;

        for (a = 0; haystack[a] > '\0'; a++)
        {
                for (b = a; haystack[b] > '\0' && needle[b - a] > '\0'; b++)
                {
                        if (haystack[b] != needle[b -a])
                        {
                                break; }}
                if (needle[b - a] == '\0')
                {
                        return (haystack + a); }}
        return (0); }
