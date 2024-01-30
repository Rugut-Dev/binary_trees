#include "binary_trees.h"

/**
 * bal_factor_hpr - measures the balance factor of a binary tree
 * @tree: ptr to root node
 *
 * Return: if tree is NULL, return 0
 */
size_t bal_factor_hpr(const binary_tree_t *tree)
{
	size_t left_h, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h = 1 + bal_factor_hpr(tree->left);
	else
		left_h = 1;

	if (tree->right)
		right_h = 1 + bal_factor_hpr(tree->right);
	else
		right_h = 1;

	return ((left_h > right_h) ? left_h : right_h);

}

/**
 * binary_tree_balance - measures balance factor
 * @tree: ptr to root node
 *
 * Return: 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_subtree, left_subtree, b_factor = 0;

	if (!tree)
		return (0);

	right_subtree = ((int)bal_factor_hpr(tree->right));
	left_subtree = ((int)bal_factor_hpr(tree->left));
	b_factor = left_subtree - right_subtree;

	return (b_factor);
}
