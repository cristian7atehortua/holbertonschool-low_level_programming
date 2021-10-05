#include "main.h"
/**
 * print_last_digit - the last digit of a number
 * @n: number to be operated
 * Return: n with last digit
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
return (n);
}
