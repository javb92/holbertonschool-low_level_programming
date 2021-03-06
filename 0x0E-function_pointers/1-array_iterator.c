#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *array_iterator - print
 *@array: string to copy.
 *@size: size.
 *@action: method.
 *Return: not.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array != NULL && size != 0 && action != NULL)
{
for (x = 0 ; x < size ; x++)
{
action(array[x]);
}
}
}
