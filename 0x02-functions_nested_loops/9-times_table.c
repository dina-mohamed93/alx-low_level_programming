#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 0; mult <= 9; mult++)
		{

			_putchar(',');
			_putchar(' ');

			prod = num * mult;
			/*
			 * put space if product is asingle number
			 * place the firest digit if its two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
