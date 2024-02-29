#include "binary_trees.h"

/**
 * binary_trees_ancestor - A function that finds the lowest
 * common ancestor of two nodes
 *
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *temp;

	/* Check if either input node is NULL */
	if (!first || !second)
		return (NULL);

	/* Check if both input nodes are the same */
	if (first == second)
		return ((binary_tree_t *)first);

	/* Iterate through ancestors of first node */
	while (first)
	{
		temp = second;

	/* Iterate through ancestors of second node */
	while (temp)
	{
		/* Check if common ancestor is found */
		if (first == temp)
			return ((binary_tree_t *)first);

		/* Move up to parent of second node */
		temp = temp->parent;

	}

	/* Move up to parent of first node */
	first = first->parent;
	}

	/* No common ancestor found */
	return (NULL);
}
