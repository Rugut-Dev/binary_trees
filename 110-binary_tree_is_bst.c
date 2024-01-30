#include "binary_trees.h"

/**
 * is_bst_rec - checks if a binary tree is BST
 * @node: node
 * @min: minimum
 * @max: maximum
 *
 * Return: itn
 */
int is_bst_rec(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);

	if (node->n < min || node->n > max)
		return (0);

	return (
		is_bst_rec(
			node->left, min, node->n - 1
			) && is_bst_rec(node->right, node->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if btree is binary tree
 * @tree: BInary tree
 *
 * Return: 1 if is BST; 0 Otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_rec(tree, INT_MIN, INT_MAX));
}
