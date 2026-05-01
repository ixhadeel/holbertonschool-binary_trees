#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * @parent: Pointer to the parent node
 * @value: Value for the new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Create the new node using the function from task 0 */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If parent already has a left child */
	if (parent->left != NULL)
	{
		/* The old left child becomes the left child of our new node */
		new_node->left = parent->left;
		/* Update the parent of the old left child */
		parent->left->parent = new_node;
	}

	/* Connect the parent to the new node */
	parent->left = new_node;

	return (new_node);
}
