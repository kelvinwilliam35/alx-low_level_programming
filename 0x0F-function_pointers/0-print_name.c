#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name); }
