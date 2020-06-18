#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order.
 * @array: array
 * @size: size array
 *
 */

void quick_sort(int *array, size_t size)
{

	int pivot, temp, i, j;
	int len = size / 2;

	if (size < 2)
		return;


	pivot = array[len];

	for (i = 0, j = size - 1; ; i++, j--)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;

		if (i >= j)
			break;

		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	print_array(array, size);

	quick_sort(array, i);
	quick_sort(array + i, size - i);
	print_array(array, size);

}
