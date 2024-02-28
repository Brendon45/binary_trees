#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: Return 0, if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	/* If the tree is empty, it has no leaves */
	if (!tree)
		return (0);

	/* If the current node is a leaf, increment the count */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively count leaves in the left and right subtrees */
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
