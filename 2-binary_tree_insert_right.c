#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: poiner to parent node
 * @value: value of node
 *
 * Return: returns a new node address
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newnode || !parent)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = parent->right;
	parent->right = newnode;
	if (newnode->right)
		newnode->right->parent = newnode;
	newnode->left = NULL;

	return (newnode);
}
