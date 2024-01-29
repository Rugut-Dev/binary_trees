#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 *
 * Return: if tree is NULL, return 0; else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);
	else
		left_h = 0;
	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);
	else
		right_h = 0;

	return ((left_h > right_h) ? left_h : right_h);
}
