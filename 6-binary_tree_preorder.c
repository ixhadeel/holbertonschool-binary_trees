#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* 1. Visit the root/current node */
	func(tree->n);

	/* 2. Go to the left subtree */
	binary_tree_preorder(tree->left, func);

	/* 3. Go to the right subtree */
	binary_tree_preorder(tree->right, func);
}
