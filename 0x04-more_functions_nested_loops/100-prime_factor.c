#include <stdio.h>

/**
 * main - prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
long int ent = 612852475143;
long int pri;

for (pri = ent; pri <= ent; pri++)
{
if (ent % pri == 0)
{
printf("%ld", pri);
break;
}
}
printf("\n");
return (0);
}
