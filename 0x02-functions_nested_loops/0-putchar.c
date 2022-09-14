#include "main.h"
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char me[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(me[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}


