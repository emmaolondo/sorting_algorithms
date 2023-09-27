#include "sort.h"
/**
 * swap - the swap algorithm
 * @a: a pointer
 * @b: b pointer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Function that partitions the array
 * @array: the array
 * @size: size of the array
 * @low: least numbers
 * @high: greater than the pivotnumber
 * Return: The final index
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = low;

	while (j < high)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}
		j++;
	}
	swap(&array[i + 1], &array[high]);
	if (array[i] != array[high])
		print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_recursive - sorting the array recursively using quicksort
 * @array: array to be sorted
 * @size: size of the array
 * @low: left part(lowest) from the pivot
 * @high: right part from the pivot(greater than the pivot)
 *
 * Return: (void)
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		quick_sort_recursive(array, size, low, pivot - 1);
		quick_sort_recursive(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - Implements the quicksort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: (void)
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, size, 0, size - 1);
}
