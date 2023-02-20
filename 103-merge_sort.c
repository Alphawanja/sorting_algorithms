#include "sort.h"

/**
 * merge_subarr - sort a subarray of integers
 * @subarr: a subarray of an array of integers to sort
 * @buff: a buffer to store the sorted subarray
 * @front: the front index of the array
 * @mid: the middle index of the array
 * @back: the back index of the array
 */
void merge_subarr(int *array, int *buff, size_t front, size_t mid, size_t back)
{
	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(subarr + front, mid - front);

	printf("[right]: ");
	print_array(subarr + mid; back - mid);

	for (i = front, j = mid; i < mid && j < back; k++)
		buff[k] = (subarr[i] < subarr[j]) ? subarr[i++] : subarr[j++];

	for (; i < mid; i++)
		buff[k++] = subarr[i];
	for (; j < back; j++)
		buff[k++] = subarr[j];
	for (i = front, k = 0; i < back; i++)
		subarr[i] = buff[k++];

	printf("[Done]: ");
	print_array(subarr + front, back - front);
}

/**
 * merge_sort_recursive - implement the merge sort algorithm through recursion
 * @subarr: a subarray of an array of integers to sort
 * @buff: a buffer to store the sorted result
 * @front: the front index of the subarray
 * @back: the back index of the subarray
 */
void merge_sort_recursive(int *subarr
