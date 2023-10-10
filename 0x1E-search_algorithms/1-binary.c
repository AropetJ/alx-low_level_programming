#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 on failure.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = (size - 1);
	size_t mid;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + (high - low) / 2);
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

	}
	return (-1);
}
