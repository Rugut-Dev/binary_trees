#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest common ancestor
 * @first: ptr to the first node
 * @second: ptr to the second node
 *
 * Return: lowest common ancestor ptr
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);

	while (first)
	{
		ancestor = second;

		while (ancestor)
		{
			if (first == ancestor)
				return ((binary_tree_t *)first);
			ancestor = ancestor->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
