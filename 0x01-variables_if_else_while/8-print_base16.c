#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
char t[16] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(t[i]);
}
putchar('\n');
return (0);
}
