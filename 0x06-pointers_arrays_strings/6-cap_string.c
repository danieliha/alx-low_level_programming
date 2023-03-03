#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointer to string
 */

char *cap_string(char *)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i-1] == ' ' ||
		
