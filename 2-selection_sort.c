#include "sort.h"
/**
 *selection_sort - function that sorts an array of integers
 *		   in ascending order using the Selection sort algorithm
 *@array: the array to sort
 *@size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, s, lp = 0;
	int l, g, ctrl;

	if (size < 2)
		return;

	while (i < size)
	{
		l = array[i];
		s = i + 1;
		ctrl = 0;
		while (s < size)
		{
			if (array[s] < l)
			{
				ctrl++;
				l = array[s];
				lp = s;
			}
			s++;
		}
		if (ctrl != 0)
		{
			g = array[i];
			array[i] = array[lp];
			array[lp] = g;
			print_array(array, size);
		}
		else
			i++;
	}
}
