#include "main.h"

/**
 * print_triangle - print_triangle - prints a triangle.
 * @size: of lines.
 * Return: void
 */

void print_triangle(int size)
{
int n, esp, m;

if (size > 0)
{
for (n = 1; n <= size; n++)
{
for (esp = 1; esp <= size - n; esp++)
{
_putchar(' ');
}
for (m = n; m > 0; m--)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
