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
	size_t size = 0;

	/* If the tree is empty, its size is 0 */
	if (!tree)
		return (0);

	/* Calculate the size of the tree recursively */
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}
