#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: A Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	/* Allocate memory for the new node */
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		/*Memory allocation failed*/
		return (NULL);
	}

	/* Initialize the new node with provided values */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}