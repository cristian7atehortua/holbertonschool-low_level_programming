#include"main.h"
/**
 * _strncpy - copies a string
 * @dest: 1
 * @src: 2
 * @n:3
 * Return: a pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0')
		j++;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
