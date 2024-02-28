#include "binary_trees.h"

/**
 * binary_tree_depth - A function that calculates the depth of a
 * node in a binary tree
 *
 * @tree: A pointer to the tree node
 *
 * Return: If tree is NULL, function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* If the node is NULL, its depth is 0 */
	if (!tree)
		return (0);

	/* If the node has a parent, calculate its depth recursively */
	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (depth);
}
