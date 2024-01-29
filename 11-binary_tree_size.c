#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: ptr to root node
 *
 * Return: size of binary tree else if !tree, returns 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (
		1 + binary_tree_size(tree->left) + binary_tree_size(tree->right)
		);
}
