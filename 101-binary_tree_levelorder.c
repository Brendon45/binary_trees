#include "binary_trees.h"

/**
 * binary_tree_levelorder - A function that traverses the binary
 * tree using level order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int tree_height, level;

	/* Check if tree or function pointer is NULL */
	if (!tree || !func)
		return;

	/* Calculate the height of the tree */
	tree_height = binary_tree_height(tree);

	/* Traverse each level of the tree */
	for (level = 0; level <= tree_height; level++)
	{
	/* Call helper function to traverse nodes at current level */
	traverse_level(tree, level, func);
	}
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure its height
 *
 * Return: If NULL, return 0, otherwise the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree = 0;
	size_t right_subtree = 0;

	/* Base case: If tree is NULL, return 0 */
	if (!tree)
		return (0);

	/* Calculate the height of left and right subtrees recursively */
	left_subtree = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_subtree = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the maximum height of left and right subtrees, plus 1 */
	return ((left_subtree > right_subtree) ? left_subtree : right_subtree);
}

/**
 * traverse_level - A Helper function to traverse a specific level of the tree
 *
 * @node: A pointer to the current node
 * @level: Current height or level of the tree to traverse
 * @func: A pointer to the function to call for each node
 */
void traverse_level(const binary_tree_t *node, int level, void (*func)(int))
{
	/* Base case: If node is NULL or level is 0, return */
	if (!node || level < 0)
		return;

	/* If level is 0, call the function to process the node */
	if (level == 0)
		func(node->n);

	/* Recursively traverse left and right subtrees */
	traverse_level(node->left, level - 1, func);
	traverse_level(node->right, level - 1, func);
}
