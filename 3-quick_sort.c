#include "sort.h"
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

int lomuto(int *array, int l, int h, size_t size)
{
	int pivot = array[h];
	int j, i = l;

	for (j = l; j < h; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != h)
	{
		swap_int(&array[i], &array[h]);
		print_array(array, size);
	}
	return (i);
}

void sort_q(int *array, int l, int h, size_t size)
{
	int p;

	if (l < h)
	{
		p = lomuto(array, l, h, size);

		sort_q(array, l, p - 1, size);
		sort_q(array, p + 1, h, size);
	}
}	
/**
 *quick_sort - function that sorts an array of integers in ascending order
 *	       using the Quick sort algorithm
 *@array: the array to sort
 *@size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort_q(array, 0, size - 1, size);
}
