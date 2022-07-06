#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - execute function.
 * @array: array to iterate over.
 * @size: size of arr.
 * @action: pointer to func used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
