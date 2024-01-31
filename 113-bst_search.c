#include "binary_trees.h"

/**
 * bst_search - performs search operation on BST
 * @tree: ptr to the root node
 * @value: value
 *
 * Return: ptr to the node, NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL || tree->n == value)
		return ((bst_t *)tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
