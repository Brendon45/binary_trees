#include "binary_trees.h"

/**
 * binary_tree_balance_height - A function that measures the balance
 * factor of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Height of the tree, -1 if tree is NULL.
 */
size_t binary_tree_balance_height(const binary_tree_t *tree)
{
	int left, right;

	/* If the tree is empty, return height as -1 */
	if (tree == NULL)
		return (-1);

	/* If the current node is a leaf, return height as 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left = binary_tree_balance_height(tree->left) + 1;
	right = binary_tree_balance_height(tree->right) + 1;

	/* Return the maximum height among the left and right subtrees */
	return (left > right ? left : right);
}

/**
 * binary_tree_balance - A function that measures
 * the balance factor of a binary tree
 *
 * @tree: A pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	/* If the tree is empty, its balance factor is 0 */
	if (tree == NULL)
		return (0);

	/* Calculate the height of the left and right subtrees */
	left = binary_tree_balance_height(tree->left);
	right = binary_tree_balance_height(tree->right);

	/* Return the difference in height between the left and right subtrees */
	return (left - right);
}
