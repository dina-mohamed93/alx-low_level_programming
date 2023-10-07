#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point 
 *
 * Description : positive or negative 
 * Return : 0 ( Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%i Number is positie \n" , n);
	else if (n==0)
		printf("%i Number is zero \n" , n);
	else if (n<0)
		printf("%i Number is Negative \n" , n);
	return (0);
}
