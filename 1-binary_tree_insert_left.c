#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		binary_tree_t *old_left = parent->left;

		new_node->left = old_left;
		old_left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}

	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;
	parent->left = new_node;

	return (new_node);
}
