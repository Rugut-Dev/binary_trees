#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: poiner to parent node
 * @value: value of node
 *
 * Return: returns a new node address
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newnode ||!parent)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	parent->left = newnode;
	if (newnode->left)
		newnode->left->parent = newnode;
	newnode->right = NULL;

	return (newnode);
}
