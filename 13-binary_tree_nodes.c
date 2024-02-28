#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least one child, 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	/* If the tree is empty, the number of nodes is 0 */
	if (!tree)
		return (0);

	/* If the current node has at least one child, increment count */
	if (tree->left || tree->right)
		count++;

	/* Recursively count nodes in the left and right subtrees */
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
