#include"main.h"
/**
 * _strcmp - Compares two strings
 * @s1: first
 * @s2: second
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
	}
	return (0);
}
