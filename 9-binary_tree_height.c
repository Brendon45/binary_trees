#include  "binary_trees.h"

/**
 * binary_tree_height - function in C, which calculates the
 * height of a binary tree
 *
 * @tree: pointer to root node
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	/* If the tree is empty, return height as 0 */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, return height as 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	/* Return the maximum height among the left and right subtrees */
	if (left > right)
		return (left);
	return (right);
}
