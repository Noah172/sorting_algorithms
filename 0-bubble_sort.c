#include "sort.h"
/**
 *bubble_sort - function that sorts an array of integers in ascending
 *              order using the Bubble sort algorithm
 *
 *@array: the given array to sort
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int t = 1, tm;
	size_t i;

	while (t != 0)
	{
		t = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tm = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tm;
				t++;
				print_array(array, size);
			}
		}
	}
}
