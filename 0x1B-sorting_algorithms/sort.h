#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
int get_list_size(listint_t *tmp);
void reversePrint(listint_t** head_ref);
void selection_sort(int *array, size_t size);
void swap(int *ind1, int *ind2, int *array, size_t size);
void recur_sort(int *array, int low, int high, size_t size);
int partition(int *arr, int low, int high, size_t size);
void quick_sort(int *array, size_t size);
void change_quick(int *ind1, int *ind2);
#endif
