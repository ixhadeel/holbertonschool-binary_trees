#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* If the tree is already empty, do nothing */
	if (tree == NULL)
	{
		return;
	}

	/* First, delete the left subtree */
	binary_tree_delete(tree->left);

	/* Then, delete the right subtree */
	binary_tree_delete(tree->right);

	/* Finally, free the current node */
	free(tree);
}
