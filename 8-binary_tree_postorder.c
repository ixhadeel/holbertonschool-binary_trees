#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
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

	/* 1. First, visit the left subtree */
	binary_tree_postorder(tree->left, func);

	/* 2. Then, visit the right subtree */
	binary_tree_postorder(tree->right, func);

	/* 3. Finally, call the function for the current node */
	func(tree->n);
}
