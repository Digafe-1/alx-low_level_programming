#include "function_pointers.h"
#include <stdio.hi>
/**
 * array_iterater - ...
 * @array: ...
 * @size: ...
 * @action: ...
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	size_t i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
