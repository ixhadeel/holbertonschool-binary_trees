#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * @parent: Pointer to the parent node
 * @value: Value for the new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Create the new node using our function from task 0 */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Check if parent already has a right child */
	if (parent->right != NULL)
	{
		/* Move the old right child to be the child of our new node */
		new_node->right = parent->right;
		/* Set the parent of the old child to our new node */
		parent->right->parent = new_node;
	}

	/* Connect the parent to the new node on the right side */
	parent->right = new_node;

	return (new_node);
}
