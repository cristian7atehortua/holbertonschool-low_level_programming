#include "main.h"
#include<string.h>
/**
 *puts2 - write a function that prints every other
 *character of a string, starting with the first
 *character, followed by a new line.
 *@str: pointer char
 *Return: void
 */
void puts2(char *str)
{
int i = 0;
while (str[i])
{
if (!(i % 2))
putchar(str[i]);
i++;
}
putchar('\n');
}
