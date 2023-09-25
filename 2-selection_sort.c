#include "sort.h"
/**
 * selection_sort - implementation of the selection sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: sorted array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_pos, temp;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = i;/* the current minimum position*/
		for (j = i + 1; j < size; j++)
		{
			/** Find the new minimum position**/
			if (array[j] < array[min_pos])
				min_pos = j;
		}
		/** swap the current element with the minimum element */
		if (min_pos != i)
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}
	}
}
