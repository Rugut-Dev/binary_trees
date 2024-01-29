#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to the node being checked
 *
 * Return: 1 if node is root; otherwise 0 or if !node, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
