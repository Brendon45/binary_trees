#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  A function that performs a left-rotation
 * on a binary tree
 *
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	/* Check if tree is NULL or has no right child */
	if (!tree || !tree->right)
		return (tree);

	/* Store the right child of the current root as new_root */
	new_root = tree->right;

	/* Set the right child of the current root to the left child of new_root */
	tree->right = new_root->left;

	/* Update parent pointers */
	if (new_root->left)
	new_root->left->parent = tree;

	/* Make new_root the new parent of the current root */
	new_root->parent = tree->parent;

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
