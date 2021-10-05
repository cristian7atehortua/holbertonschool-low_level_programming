#include "main.h"
/**
 /**
 * _isalpha -  checks for alphabetic character
 * @c: check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 *
int _isalpha(int c)
{
char abc = 'a';
char abc_may = 'A';
int ret = 0;

	while (abc <= 'z')
{
	if (c == abc)
		{
			ret = 1;		}
	abc++;
}
	while (abc_may <= 'Z')
	{
if (c == abc_may)
{
ret = 1;
}
abc_may++;
}
return (ret);
}
