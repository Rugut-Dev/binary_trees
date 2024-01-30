#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: ptr to the root node
 *
 * Return: if !tree or not full, 0 else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	return (
		binary_tree_is_full(
			tree->left
			) && binary_tree_is_full(tree->right)
		);
}
