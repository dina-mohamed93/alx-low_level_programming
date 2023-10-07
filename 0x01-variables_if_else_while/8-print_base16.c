#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
        putchar('\n');
        return (0);
}
