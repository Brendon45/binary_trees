#include "binary_trees.h"

/**
 * binary_tree_is_bst - A function that checks if a binary tree is a valid
 * binary Search Tree
 *
 * @tree: A pointer to the root of the node to check
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *prev = NULL;

	/* Call helper function with root and a pointer to the previous node */
	return (is_binary_search_tree(tree, &prev));
}

/**
 * is_binary_search_tree - Helper function to check if a binary tree is
 * a valid Binary Search Tree
 *
 * @tree: A pointer to the root node of the tree
 * @prev: A pointer to the previously visited node
 *
 * Return: 1 if tree is a binary_search, otherwise 0
 */

int is_binary_search_tree(const binary_tree_t *tree,
	const binary_tree_t **prev)
{
	/* Base case: an empty tree is a BST */
	if (!tree)
		return (1);

	/* Recursively check the left subtree */
	if (!is_binary_search_tree(tree->left, prev))
		return (0);

	/* Check if the current node's value is > than the prv node's value */
	if (*prev != NULL && tree->n <= (*prev)->n)
		return (0);

	/* Update the previous node to the current node */
	*prev = tree;

	/* Recursively check the right subtree */
	return (is_binary_search_tree(tree->right, prev));
}
