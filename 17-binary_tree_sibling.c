#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 *
 * @node:  A pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If the node is NULL or has no parent, it has no sibling */
	if (!node || !node->parent)
		return (NULL);

	/* If the node is the left child, return the right child of its parent */
	if (node->parent->left == node)
		return (node->parent->right ? node->parent->right : NULL);

	else
	/* If the node is the right child, return the left child of its parent */
	return (node->parent->left ? node->parent->left : NULL);
}
