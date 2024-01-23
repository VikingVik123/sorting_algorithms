#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Function name
 * @array: pointer to the array 2 sort
 * size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap(&array[j], &array[j+1]);
				
				for (k = 0; k < size; k++)
				{
					if (k < size - 1)
					{
						printf(", ");
					}
				}
				_puts("\n");
			}
		}
	}
}
