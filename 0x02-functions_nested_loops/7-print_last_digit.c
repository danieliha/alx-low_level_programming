#include "main.h"

/**
 * print_last_digit - print last digit of a num
 * @n: The number to be treated
 * Return: Value of the digit digit of num
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
