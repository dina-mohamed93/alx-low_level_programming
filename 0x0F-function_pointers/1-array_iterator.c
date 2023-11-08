#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * @array : the int array
 * @size: the array size
 * @action: function pointer
 *
 * return: void
 */

int int_index(int *array, int size, int (*cmp)(int));
{
        int *end = array + size -1;

        if (array && size && action)
                while (array <= end)
                        action(*array++);
