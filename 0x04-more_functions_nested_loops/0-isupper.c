#include "main.h"

/**
*_isupper - checks for uppercase character.
*
*@c: uppercase character in ascii value.
*
*Return: 1 if character 'c' is uppercase / return 0.
*
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
