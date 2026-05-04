#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Betty error: indentation with spaces instead of tabs below */
    if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	/* Logical error: Right before Left */
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
