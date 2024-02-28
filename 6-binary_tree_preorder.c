#include "binary_trees.h"

/**
 * binary_tree_preorder - prints elements of tree
 *
 * @tree: a pointer to the root node of the tree to traverse
 *
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */

/* Function to traverse a binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		/* Call func on the current node's value */
		func(tree->n);

		/* Recursively traverse left subtree */
		binary_tree_preorder(tree->left, func);

		/* Recursively traverse right subtree */
		binary_tree_preorder(tree->right, func);
	}
}

