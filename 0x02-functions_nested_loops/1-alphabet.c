#include "main.h"
/**
 * Write a function that prints the alphabet,
 * in lowercase, followed by a new line
 */
void print_alphabet(void)
{
char q;
for (q = 'a'; q <= 'z'; q++)
{
_putchar(q);
}
_putchar('\n');
}
