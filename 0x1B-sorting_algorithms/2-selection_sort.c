#include "sort.h"

/**
 *selection_sort - insert
 *@array: list
 *@size: size
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int index_min = 0;
	unsigned int tmp = 0;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			index_min = i;
			for (j = i + 1 ; j < size ; j++)
			{
				if (array[j] < array[index_min])
				{
					index_min = j;
				}
			}
			tmp = array[index_min];
			array[index_min] = array[i];
			array[i] = tmp;
			if (array[index_min] != array[i])
				print_array(array, size);
		}
	}
}
