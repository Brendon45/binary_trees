#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		/*If the tree is NULL, it returns nothing*/
		return;
	}

	/* delete the left and right(sub)- trees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* frees the current node(tree) */
	free(tree);
}
