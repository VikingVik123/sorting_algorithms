#include <stdio.h>
#include "sort.h"

/**
 * swap - func 2 swap 2 values
 * @a: pointer 2 1st value
 * @b: pointer 2 2nd value
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
