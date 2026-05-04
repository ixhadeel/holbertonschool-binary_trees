#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a tree using post-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* 1. Visit left subtree */
	binary_tree_postorder(tree->left, func);

	/* 2. Visit right subtree */
	binary_tree_postorder(tree->right, func);

	/* 3. Call function for the node */
	func(tree->n);
}
