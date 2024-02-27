#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a new node as the left child
 * of a given node.
 * @parent: A pointer to the parent node
 * @value: Value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted left child, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent node is NULL, insertion not allowed in this case */
	if (!parent)
		return (NULL);

	/* Create a new node and initialize it with the provided value */
	new_node = binary_tree_node(parent, value);

	/* If memory allocation for the new node fails, return NULL */
	if (!new_node)
		return (NULL);

	/* If the parent already has a left child, update pointers accordingly */
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* Set the new node as the left child of the parent */
	parent->left = new_node;
	
	/* Return pointer to the newly inserted left child */
	return (new_node);
}
