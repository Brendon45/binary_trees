#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		/* Return 0 if the node is NULL */
		return (0);
	/* Check if the node has no children */
	return (node->left == NULL && node->right == NULL);
}
