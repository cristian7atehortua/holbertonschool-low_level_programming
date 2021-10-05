#include "main.h"
/**
 * print_sign- prints the sign of a number
 * @n: return value variable
 *
 * Return: n
 */
int print_sign(int n)
{
if (n > 0)
{
n = 1;
_putchar('+');
}
else if (n < 0)
{
n = -1;
_putchar('-');
}
else if (n == 0)
{
n = 0;
_putchar('0');
}
return (n);
}
