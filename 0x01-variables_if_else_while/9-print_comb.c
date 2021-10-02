#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int m;

m = 48;
while  (m < 58)
{
putchar(m);
if (m !=  57)
{
putchar(',');
putchar(' ');
m++;
}
else
{
m++;
}
}
putchar('\n');
return (0);
}
