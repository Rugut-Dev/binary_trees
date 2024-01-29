#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: binary tree
 *
 * Return: depth of node if tree, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
