#include "main.h"

/**
* more_numbers -  prints 10 times the numbers, from 0 to 14.
*
* Return: Always 0.
*/

void more_numbers(void)
{
	int c, d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('0' + c / 10);
			_putchar('0' + c % 10);
		}
		_putchar ('\n');
	}
}
