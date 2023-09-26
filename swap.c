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
