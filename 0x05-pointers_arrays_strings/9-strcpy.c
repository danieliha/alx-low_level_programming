#include " main.h"

/**
 * _strcpy - copies the string pointe to by src
 * @dest: destination
 * @src source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(scr + len) != '\0')
	{
		*(dest + len) = *(str + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
