#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print single digit numbers of base 10 starting from
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
