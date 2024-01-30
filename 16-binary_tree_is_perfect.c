#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: ptr to toot node
 *
 * Return: height of the tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t height_l = binary_tree_height(tree->left);
	size_t height_r = binary_tree_height(tree->right);

	return ((height_l > height_r) ? height_l + 1 : height_r + 1);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node ptr
 *
 * Return: size of the tree, o if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
		1 + binary_tree_size(
			tree->left
			) + binary_tree_size(tree->right)
		);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: ptr to the root node of the tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);

	return (((size_t)(1) << height) - 1 == size);
}
