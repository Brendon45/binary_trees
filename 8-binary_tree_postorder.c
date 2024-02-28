#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse a binary tree in postorder
 * @tree:
 * @func:
 *
 * If tree or func is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
        return;

	// Traverse left subtree
	if (tree->left != NULL)
	binary_tree_postorder(tree->left, func);

	// Traverse right subtree
	if (tree->right != NULL)
	binary_tree_postorder(tree->right, func);

	// Visit the root node
	func(tree->n);
}
