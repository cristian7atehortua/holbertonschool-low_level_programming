#include "main.h"

/**
  * more_numbers - prints 
  */
void more_numbers(void)
{
	int sl, n;

	for (sl = 0; sl < 10; sl++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar(10);
	}
}
