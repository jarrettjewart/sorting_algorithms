#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: Array
 * @size: Size of array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j, tmp;

	if (size < 2 && !array)
		return;
	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
						}
						}
						}
						}
