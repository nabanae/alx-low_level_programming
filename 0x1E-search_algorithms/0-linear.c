#include "search_algos.h"

/**
  * linear_search - Searche for a value in an array
  *                 of integers using linear search.
  * @array: pointer to the first element of the array to search.
  * @size:  number of elements in the array.
  * @value:  value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Print a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	int i = 0, start = 0, end = (int)size - 1, mid = 0;

	if (!array)
		return (-1);
	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i != end)
				printf(", ");
			else
				printf("\n");
		}
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
