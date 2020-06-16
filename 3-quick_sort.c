#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

/**
 * quick_sort1 - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @list: array
 * @left: left
 * @right: right
 *
 * Return: void
 */

void quick_sort1(int list[], size_t left, size_t right)
{
	size_t izq = left, temp;
	size_t der = right - 1;
	size_t pivot = (sizeof(list) / 2);

	do
	{
		while (list[izq] < pivot && izq < right)
			izq++;
		while (pivot < list[der] && der > left)
			der--;
		if (izq <= der)
		{
			temp = list[izq];
			list[izq] = list[der];
			list[der] = temp;
			izq++;
			der--;
		}
	}while (izq <= der);
	if (left < der)
		quick_sort1(list, left, der);
	if (right < izq)
		quick_sort1(list, izq, left);
}

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: array
 * @size: size array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	quick_sort1(array, 0, size-1);
	quick_sort1(array, 0 + 1, size);
}
