#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * bubble_sort - Sort by swapping largest items to end of array
 * @array: Array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t w;
	int swapped;
	size_t temp;
	size_t tempsize;

	if (array == NULL)
		return;
	tempsize = size;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		w = 0;
		while (w < tempsize - 1)
		{
			if (array[w] > array[w + 1])
			{
				temp = array[w + 1];
				array[w + 1] = array[w];
				array[w] = temp;
				print_array(array, size);
				swapped = 1;
			}
			w++;
		}
		tempsize = w;
	}
}
