#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a binary tree
 * @tree: pointe to the tree node 
 * If tree is NULL, function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return 0;

	while (tree->parent != NULL) {
		depth++;
		tree = tree->parent;
	}

	return depth;
}
