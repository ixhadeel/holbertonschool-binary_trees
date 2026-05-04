#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* 1. Go to the left child */
	binary_tree_inorder(tree->left, func);

	/* 2. Process the current node */
	func(tree->n);

	/* 3. Go to the right child */
	binary_tree_inorder(tree->right, func);
}
