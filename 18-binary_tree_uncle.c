#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: ptr to node to find uncle
 *
 * Return: NULL or uncle;
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
