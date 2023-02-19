#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	
	for (a = 0 ; a < 100 ; a++) 
	{
		putchar (a + '0');
	for (a = 0; a < 100; a++) 
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
