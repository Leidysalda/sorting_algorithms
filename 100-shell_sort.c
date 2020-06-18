#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order.
 * @array: array
 * @size: size array
 *
 */

void shell_sort(int *array, size_t size)
{

	int temp, j;
	size_t i;
	int len;

	for (len = size / 2; len > 0; len /= 2)
	{
		for (i = len; i < size; i += 1)
		{
			temp = array[i];

			for (j = i; j >= len && array[j - len] > temp; j -= len)
				array[j] = array[j - len];

			array[j] = temp;
		}
	print_array(array, size);
	}
}
