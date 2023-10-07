#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i Number is positie\n", n);
	else if (n == 0)
		printf("%i Number is zero\n", n);
	else
		printf("%i Number is Negative\n", n);
	return (0);
}
