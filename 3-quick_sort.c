#include "sort.h"

/**
 * lomuto_partition - Function that partitions an array
 * @array: pointer to array to partition
 * @low: minimum size of array
 * @size: maximum size of array
 */
size_t lomuto_partition(int *array, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = low - 1;

	for (size_t j = low; j <= high - 1; ++j)
	{
		if (array[j] < pivot)
		{
			++i;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	
	return i + 1;
}

void quick_sort_recur(int *array, size_t first, size_t last, size_t size)
{
	if (first < last)
	{
		size_t pivot_index = lomuto_partition(array, first, last);

		if (pivot_index > 0)
			quick_sort_recur(array, first, pivot_index - 1, size);
		quick_sort_recur(array, pivot_index + 1, last, size);
	}
}

/**
 * quick_sort - function to sort array of integers
 * @array: pointer to array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recur(array, 0, size - 1, size);
}
