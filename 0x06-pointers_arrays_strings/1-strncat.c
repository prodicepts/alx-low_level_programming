#include "main.h"
/**
 * _strncat - as _strcat but it will use at most n bytes from src
 * @dest: to
 * @src: from
 * @n: clause
 * Return: Pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
