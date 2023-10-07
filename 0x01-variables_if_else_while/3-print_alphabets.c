#include <stdio.h>
/** 
 * main - entry point 
 *
 * Description: print lowwer and upper alphabet
 *
 * Return: 0
 */
int main()
{
	char ch = 'a';
	char CH = 'A';
	
	while (ch <= 'z')
	{
		putchar(ch);
	        ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
