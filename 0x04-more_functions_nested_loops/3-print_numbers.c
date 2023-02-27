#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * Return: 0
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
}

