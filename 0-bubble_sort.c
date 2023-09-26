#include "sort.h"

/**
 * bubble_sort - implementing the bubble sort algorithm
 * @array: the integer array to be sorted
 * @size: size of the array
 *
 * Return sorted list
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
