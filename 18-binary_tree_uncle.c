#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 *
 * @node: A pointer to the node to find the uncle
 *
 * Return: If node is NULL, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* If the node is NULL or has no parent, it has no uncle */
	if (!node || !node->parent)
		return (NULL);

	/* Find and return the sibling of the parent of the node */
	return (binary_tree_sibling(node->parent));
}
