#include "sort.h"

int lomuto_partition(int *array, size_t first, size_t last)
{
    int pivot = array[last];
    size_t i = first;
    size_t j;

    for (j = first; j < last; j++)
    {
        if (array[j] <= pivot)
        {
            if (i != j)
            {
                swap(&array[i], &array[j]);
                print_array(array, last - first + 1);
            }
            i++;
        }
    }

    if (i != last)
    {
        swap(&array[i], &array[last]);
        print_array(array, last - first + 1);
    }

    return i;
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

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quick_sort_recur(array, 0, size - 1, size);
}
