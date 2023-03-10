#include "main.h"
#include <stdio.h>

/**
 * print_rev recursion - prints a string in reverse.
 * @s: the string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}

}
