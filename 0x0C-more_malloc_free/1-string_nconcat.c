#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @S1: first string
 * @S2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	if (n > size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
