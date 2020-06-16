#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm.
 *
 * @list: pointer list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	size_t i, j;
	int aux;

	if (list)
	{
		for (i = 1; i != '\0'; i++)
		{
			aux = list[i];
			j = i -1;
			while (j >= 0 && list[j] > aux)
			{
				array[j + 1] = array[j];
				j = j -1;
			}
		}
		list[j + 1] = aux;
	}
}
