#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 *	order using the Bubble sort algorithm
 *
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

