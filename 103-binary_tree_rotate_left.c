#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation algorithm
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y, *x, *z;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	x = tree;

	y = x->right;
	z = y->left;

	y->left = x;
	x->right = z;

	if (x->parent != NULL)
	{
		if (x->parent->left == x)
			x->parent->left = y;
		else
			x->parent->right = y;
	}
	else
		tree = y;

	y->parent = x->parent;
	x->parent = y;

	if (z != NULL)
		z->parent = x;

	return (tree);
}
