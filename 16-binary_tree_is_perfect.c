#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The function returns 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_subtree = 0;
	size_t right_subtree = 0;

	/* If the tree is empty, its height is 0 */
	if (!tree)
		return (0);

	/* Calculate the height of the left subtree */
	left_subtree = tree->left ? 1 + binary_tree_size(tree->left) : 0;

	/* Calculate the height of the right subtree */
	right_subtree = tree->right ? 1 + binary_tree_size(tree->right) : 0;

	/* Return the maximum height among the left and right subtrees */
	return ((left_subtree > right_subtree) ? left_subtree : right_subtree);
}

/**
 * binary_tree_is_perfect - A function checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If the tree is empty, it is not perfect */
	if (!tree)
		return (0);

	/* Calculate the height of the left and right subtrees */
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	/* If the heights are equal, check if both subtrees are perfect */
	if (left_height == right_height)
	{
	/* If the current node is a leaf, it is perfect */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check if both left and right subtrees are perfect */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}
