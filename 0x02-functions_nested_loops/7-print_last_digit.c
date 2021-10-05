#include "main.h"
/**
*print_last_digit - The last digit of a number
*@n: The last digit
*Return:last digit
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last > 0)
{
_putchar(last);
return (last);
}
else
{
last = last * -1;
_putchar(last);
return (last);
}
}
