#include "sort.h"

/**
 * shell_sort - Function that sorts an array of integers
 * @array: pointer to array
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	size_t inte = 1;

	while (inte <= size / 3)
	{
		inte = inte * 3 + 1;
	}

	while (inte > 0)
	{
		for (size_t i = inte; i < size; ++i)
		{
			int temp = array[i];
			size_t j;

			for (j = i; j >= inte && array[j - inte] > temp; j -= inte)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
		inte = (inte - 1) / 3;
	}
}
