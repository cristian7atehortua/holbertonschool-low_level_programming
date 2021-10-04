#include "0-putchar.c"
/**
 * main - Prints.
 * Return: 0
 */
int main(void)
{
int i = 0;
char p[] = "_putchar\n";
while (i <= 9)
{
_putchar(p[i]);
i++;
}
return (0);
}
