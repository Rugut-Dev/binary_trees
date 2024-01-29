#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: ptr to root node
 *
 * Return: if !tree return 0; else return size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return 1;

	return (
		binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right)
		);
}
