#include "search_algos.h"

/**
 * print_array - prints the subarray.
 * @arr: array of sorted integers
 * @l: leftmost index of subarray
 * @r: rightmost index of subarray
 */

void print_array(int arr[], int l, int r)
{
	printf("Searching in array: ");
	if (l < r)
	{
		while (l <= r)
		{
			printf("%d", arr[l]);
			if (l < r)
				printf(", ");
			else
				printf("\n");
			l++;
		}
	}
	else
		printf("%d\n", arr[l]);
}

/**
 * binarySearch - the binary search function
 * @arr: array of sorted integers
 * @l: leftmost index of the subarray
 * @r: rightmost index of the subarray
 * @x: value to search for
 * Return: index where value is located if value is found
 * else -1 if value is not found.
 */

int binarySearch(int arr[], int l, int r, int x)
{
	int m;

	while (l <= r)
	{
		print_array(arr, l, r);

		m = l + (r - l) / 2;

		if (arr[m] == x)
			return (m);

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return (-1);
}

/**
 * binary_search - function that searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index where value is located if value is found
 * else -1 if value is not found or array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int r, ret;

	if (array == NULL)
		return (-1);
	r = size - 1;
	ret = binarySearch(array, 0, r, value);
	return (ret);
}
