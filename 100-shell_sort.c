#include "sort.h"

/**
*swap - the positions of two elements into an array
*@array: array
*@item_01: array element
*@item_02: array element
*/
void swap(int *array, int item_01, int item_02)
{

	int tmp;

	tmp = array[item_01];
	array[item_01] = array[item_02];
	array[item_02] = tmp;
}
/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of the array
 * @array: list with numbers
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, index = 0;

	if (array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = 3 * gap + 1;
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
			for (index = i; index >= gap &&
			 (array[index] < array[index - gap]); index -= gap)
				swap(array, index, index - gap);
		print_array(array, size);
		gap /= 3;
	}
}
