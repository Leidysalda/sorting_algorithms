#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm.
 *
 * @array: array
 * @size: size array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, pos;
	int temp;

	if (array)
	{
		for (i = 1; i < size; i++)
		{
			for (i = 0; i < (size - 1); i++)
			{
				pos = i;
				for (j = i + 1; j < size; j++)
				{
					if (array[pos] > array[j])
						pos = j;
				}
				if (pos != i)
				{
					temp = array[i];
					array[i] = array[pos];
					array[pos] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
