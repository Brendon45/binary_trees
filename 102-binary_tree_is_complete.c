#include "binary_trees.h"

/**
 * binary_tree_is_complete - A function that checks if the binary
 * tree is complete
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: return 0, if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Call helper function to check if tree is complete */
	return (is_complete(tree, 0, binary_tree_size(tree)));
}

/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure its size
 *
 * Return: If NULL, return 0, or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	/* Calculate the size of the tree recursively */
	count = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (count);
}

/**
 * is_complete - Helper function to help check for a complete tree
 *
 * @tree: A pointer to the root node of the tree to check
 * @index: index of current node
 * @size: number of nodes in the tree
 *
 * Return: 1 if complete, 0 or NULL if not root
 */
int is_complete(const binary_tree_t *tree, int index, int size)
{
	if (!tree)
		return (1);  /* If tree is NULL, it's considered complete */

	/* If index is greater than or equal to size, tree is not complete */
	if (index >= size)
		return (0);

	/* Recursively check left and right subtrees */
	return (is_complete(tree->left, 2 * index + 1, size) &&
		is_complete(tree->right, 2 * index + 2, size));
}
