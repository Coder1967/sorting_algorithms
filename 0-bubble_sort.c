#include "sort.h"
/**
 * bubble_sort - sorts array using bubble sort algorithm
 * @array: array to be sorted
 * @size: length of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, check, tmp;

	for (i = 0; i < size; i++)
	{
		check = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				check = 1;
				print_array(array, size);
			}
		}
		if (check == 0)
			break;
	}
}
