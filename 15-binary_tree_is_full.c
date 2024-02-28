#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If the tree is empty, it is not full */
	if (!tree)
		return (0);

	/* If the current node is a leaf, it is full */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check if both left and right subtrees are full */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
