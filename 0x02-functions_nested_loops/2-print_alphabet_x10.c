
#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet, in lowercase.
 *Return: 0
 */
void print_alphabet_x10(void)
{
char abc;
int i = 1;
while (i <= 10)
{
abc = 'a';
while (abc <= 'z')
{
_putchar(abc);
abc++;
}
_putchar('\n');
i++;
}
}
