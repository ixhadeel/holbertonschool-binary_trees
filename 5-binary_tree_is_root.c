#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, it can't be a root */
	if (node == NULL)
	{
		return (0);
	}

	/* A root node is a node that has no parent */
	if (node->parent == NULL)
	{
		return (1);
	}

	/* If it has a parent, it's not the root */
	return (0);
}
