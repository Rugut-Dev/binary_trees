#include "binary_trees.h"

/**
 * array_to_bst - builds BST frm arr
 * @array: array's 1st elem ptr
 * @size: size of array
 *
 * Return: ptr of root node; or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root_ptr = NULL;
	size_t i;

	if (!array || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (bst_insert(&root_ptr, array[i]) == NULL)
		{
			continue;
		}
	}

	return (root_ptr);
}
