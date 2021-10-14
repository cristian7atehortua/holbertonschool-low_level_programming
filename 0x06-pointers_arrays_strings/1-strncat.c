#include"main.h"
/**
 * _strncat - Concatenate.
 * @dest: destination
 * @src: source
 * @n: concatenation 
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
