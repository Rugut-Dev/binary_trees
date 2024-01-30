#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x, *y, *z;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	y = tree;
	x = y->left;
	z = x->right;

	x->right = y;
	y->left = z;

	if (y->parent != NULL)
	{
		if (y->parent->left == y)
			y->parent->left = x;
		else
			y->parent->right = x;
	}
	else
		tree = x;

	x->parent = y->parent;
	y->parent = x;

	if (z != NULL)
		z->parent = y;

	return (tree);
}
