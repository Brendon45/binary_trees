#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs inorder traversal on a binary tree.
 *
 * This function recursively traverses a binary tree
 * in inorder fashion, it first visits the left subtree
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree pointer and function pointer are not NULL */
	if (!tree || !func)
		return;

	/* Traverse left subtree in inorder */
	binary_tree_inorder(tree->left, func);

	/* Apply the given function to the current node */
	func(tree->n);

	/* Traverse right subtree in inorder */
	binary_tree_inorder(tree->right, func);
}
