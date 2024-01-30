#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: ptr to node
 *
 * Return: ptr to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
