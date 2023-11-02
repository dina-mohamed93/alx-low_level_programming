#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or null
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m  = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
