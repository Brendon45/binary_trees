#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function that performs a right-rotation
 * on a binary tree
 *
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	/* Check if tree is NULL */
	if (!tree)
		return (NULL);

	/* Store the left child of the current root as new_root */
	new_root = tree->left;

	/* If new_root is NULL, return the original tree */
	if (!new_root)
		return (tree);

	/* Set the left child of the current root to the right child of new_root */
	tree->left = new_root->right;

	/* Update parent pointers */
	if (new_root->right)
		new_root->right->parent = tree;

	/* Set the right child of new_root to the current root */
	new_root->right = tree;

	/* Make new_root the parent of the current root */
	new_root->parent = tree->parent;
	tree->parent = new_root;

	/* If new_root has a parent, update its child pointer */
	if (new_root->parent)
	{
		if (new_root->parent->left == tree)
		new_root->parent->left = new_root;
	else
		new_root->parent->right = new_root;
	}

	/* Return the new root of the tree */
	return (new_root);
}
