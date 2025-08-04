#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
	old_right = parent->right;

		new_node->right = old_right;
		old_right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}

	new_node->left = NULL;
	new_node->n = value;
	new_node->parent = parent;
	parent->right = new_node;

	return (new_node);

}
